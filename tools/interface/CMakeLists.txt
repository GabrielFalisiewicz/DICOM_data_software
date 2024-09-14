project(interface)

set(DEPENDS
    dcmcore
    dcmimage
)

find_package(QT NAMES Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
)

set(USE_QT TRUE)
set(USE_CONSOLE FALSE)
set(CMAKE_AUTOUIC ON)

#add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})
#target_link_libraries(${PROJECT_NAME} PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)



include(build_executable)

target_sources(interface
  PRIVATE
  src/mainwindow.ui
  include/DicomTreeModel.h
  src/DicomTreeModel.cpp

)
