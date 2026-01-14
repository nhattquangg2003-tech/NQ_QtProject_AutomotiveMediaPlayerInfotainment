cmake_minimum_required(VERSION 3.16)

project(SS21_22 VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set (CMAKE_AUTORCC ON )
find_package(Qt6 REQUIRED COMPONENTS Quick Multimedia)

qt_standard_project_setup(REQUIRES 6.8)

qt_add_executable(appSS21_22
    main.cpp
    Musiccontroller.cpp
    radiusimage.cpp
)

qt_add_qml_module(appSS21_22
    URI SS21_22
    VERSION 1.0
    QML_FILES
        Main.qml
        MyButton.qml
        MyProgressbar.qml
        Background.qml
        TrackInfo.qml
    SOURCES
        Musiccontroller.h Musiccontroller.cpp
        radiusimage.h radiusimage.cpp
    RESOURCES
        Resource.qrc
        QML_FILES MyVolumeBar.qml
)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(appSS21_22 PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appSS21_22
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appSS21_22
    PRIVATE Qt6::Quick
    PRIVATE Qt6::Multimedia
)

include(GNUInstallDirs)
install(TARGETS appSS21_22
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
