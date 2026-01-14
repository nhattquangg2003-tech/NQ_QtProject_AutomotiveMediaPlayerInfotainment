#include "radiusimage.h"

RadiusImage::RadiusImage(QQuickPaintedItem *parent)
    : QQuickPaintedItem{parent}
{
}

void RadiusImage::paint(QPainter *painter)
{
    if (m_image.isNull()) return;

    painter->setRenderHint(QPainter::Antialiasing, true);
    painter->setRenderHint(QPainter::SmoothPixmapTransform, true);

    QPainterPath path;
    path.addRoundedRect(boundingRect(), m_radius, m_radius);

    painter->save();
    painter->setClipPath(path);
    painter->drawImage(boundingRect(), m_image);
    painter->restore();
}

void RadiusImage::setImage(const QImage &newImage)
{
    if (m_image == newImage) return;
    m_image = newImage;
    emit imageChanged();
    update();
}

void RadiusImage::setRadius(int newRadius)
{
    if (m_radius == newRadius) return;
    m_radius = newRadius;
    emit radiusChanged();
    update();
}

void RadiusImage::setSource(const QUrl &url)
{
    if (m_source == url) return;
    m_source = url;
    emit sourceChanged();

    if (url.isEmpty()) {
        setImage(QImage());
        return;
    }

    QImage img;
    if (url.isLocalFile()) {
        img.load(url.toLocalFile());
    } else if (url.scheme() == "qrc") {
        img.load(":" + url.path());
    } else {
        img.load(url.toString());
    }

    if (!img.isNull()) {
        setImage(img);
    }
}
