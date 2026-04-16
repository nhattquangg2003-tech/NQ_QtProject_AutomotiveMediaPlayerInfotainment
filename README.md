# Automotive Infotainment (IVI) - Music Player Module 🎵

This project is a dedicated automotive music player component, developed using the **Qt/C++** ecosystem. It is the result of a 100% self-taught journey, focusing on complex audio logic handling and Human-Machine Interface (HMI) optimization.

## 🚀 Key Technical Highlights

### 🧠 C++ Backend & Multimedia
* **MusicController Class:** Engineered a central "brain" to manage playback logic, state transitions, and playlist control.
* **Automated Directory Scanning:** Utilized `QDir` to autonomously scan system folders and build dynamic playlists.
* **Asynchronous Metadata Extraction:** Integrated `QMediaMetaData` to extract song titles, artists, and album art without blocking the UI thread, ensuring a smooth user experience.

### 🎨 HMI & Custom Graphics
* **Custom Painting (`QQuickPaintedItem`):** Developed a specialized `RadiusImage` class using `QPainter` to render high-fidelity vinyl record effects with anti-aliasing.
* **Modular QML Architecture:** The UI is built using reusable custom components:
    * `MyButton`: Custom-styled interactive controls.
    * `MyProgressBar`: Real-time track progress visualization.
    * `MyVolumeBar`: Precision audio control with safety clamping.
* **Real-time Synchronization:** Implemented a `QTimer` system to handle live updates for the dashboard clock and playback progress.

## 🛠 Tech Stack
* **Framework:** Qt 6 (QtQuick, Qt Multimedia).
* **Languages:** C++, QML, JavaScript.
* **Build System:** CMake.
* **Design Pattern:** Model-View-Controller (MVC).

## 📂 Project Structure
- `src/`: C++ Source code (Logic & Custom Painted Items).
- `ui/`: QML files and Custom UI Components.
- `assets/`: UI resources including icons, fonts, and test media.
<img width="1280" height="599" alt="image" src="https://github.com/user-attachments/assets/32350674-9e14-43ed-a407-d5f6786d7657" />

---
*Developed by Nhat Quang - A self-taught journey in Automotive Software.*
