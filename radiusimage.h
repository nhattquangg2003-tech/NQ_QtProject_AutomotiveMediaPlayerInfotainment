#ifndef RADIUSIMAGE_H
#define RADIUSIMAGE_H

#include <QQuickPaintedItem>
#include <QPainter>
#include <QImage>
#include <QPainterPath>
#include <QUrl>

class RadiusImage : public QQuickPaintedItem
{
    Q_OBJECT
    Q_PROPERTY(QImage image READ image WRITE setImage NOTIFY imageChanged)
    Q_PROPERTY(int radius READ radius WRITE setRadius NOTIFY radiusChanged)
    Q_PROPERTY(QUrl source READ source WRITE setSource NOTIFY sourceChanged)

public:
    explicit RadiusImage(QQuickPaintedItem *parent = nullptr);

    void paint(QPainter *painter) override;

    // Getter định nghĩa inline để trình biên dịch không bao giờ báo thiếu
    QImage image() const { return m_image; }
    int radius() const { return m_radius; }
    QUrl source() const { return m_source; }

    void setImage(const QImage &newImage);
    void setRadius(int newRadius);
    void setSource(const QUrl &newSource);

signals:
    void imageChanged();
    void radiusChanged();
    void sourceChanged();

private:
    QImage m_image;
    int m_radius = 0;
    QUrl m_source;
};

#endif // RADIUSIMAGE_H
