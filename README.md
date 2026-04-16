Automotive Infotainment System - Music Player Module 🎵
A sophisticated, self-taught Infotainment (IVI) dashboard component built with Qt 6, C++, and QML. This module focuses on delivering a high-end audio experience with custom-rendered UI elements and a robust C++ backend.

🚀 Key Technical Highlights
🧠 Intelligent C++ Backend
Automated Media Scanning: Implemented MusicController using QDir to autonomously scan system directories and build dynamic playlists.

Metadata Extraction: Utilized QMediaMetaData to asynchronously bóc tách (parse) thông tin bài hát (Artist, Title, Album Art) mà không làm treo giao diện (Non-blocking UI).

State Management: Core logic handled in C++ to maintain full control over playback states, volume clamping (safety limits), and track sequencing.

🎨 Advanced Graphics & UI
Custom Painting (QQuickPaintedItem): Developed a specialized RadiusImage class. This uses QPainter to render smooth, anti-aliased rounded vinyl record effects that standard QML components couldn't achieve.

Reusable Component Architecture: Created a library of custom QML widgets:

MyButton: Custom-styled interactive triggers.

MyProgressBar: Real-time track position tracking.

MyVolumeBar: Precision audio level control.

Fluid Animations: Leveraging QML's animation framework for the signature rotating vinyl effect during playback.

🔗 Hybrid Architecture (C++ & QML)
Seamless Bridging: Pure logic stays in C++ while the UI stays in QML, connected via Signals/Slots and Property Bindings.

Real-time Sync: Integrated QTimer for high-precision updates of the dashboard clock and playback progress.

🛠 Tech Stack
Framework: Qt 6.8+ (QtQuick, QtMultimedia).

Languages: C++20, QML, JavaScript.

Build System: CMake.

Concepts: MVC Architecture, Custom Shaders/Painting, Asynchronous Data Loading.
<img width="1280" height="599" alt="image" src="https://github.com/user-attachments/assets/ee13e85a-d315-4039-ad94-888801df8ebd" />
