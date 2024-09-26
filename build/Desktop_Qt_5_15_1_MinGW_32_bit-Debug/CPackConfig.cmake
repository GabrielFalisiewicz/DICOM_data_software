# This file will be configured to contain variables for CPack. These variables
# should be set in the CMake list file of the project before CPack module is
# included. The list of available CPACK_xxx variables and their associated
# documentation may be obtained using
#  cpack --help-variable-list
#
# Some variables are common to all generators (e.g. CPACK_PACKAGE_NAME)
# and some are specific to a generator
# (e.g. CPACK_NSIS_EXTRA_INSTALL_COMMANDS). The generator specific variables
# usually begin with CPACK_<GENNAME>_xxxx.


set(CPACK_BINARY_7Z "OFF")
set(CPACK_BINARY_IFW "OFF")
set(CPACK_BINARY_INNOSETUP "OFF")
set(CPACK_BINARY_NSIS "ON")
set(CPACK_BINARY_NUGET "OFF")
set(CPACK_BINARY_WIX "OFF")
set(CPACK_BINARY_ZIP "OFF")
set(CPACK_BUILD_SOURCE_DIRS "C:/Users/lotop/OneDrive/Pulpit/Praktyki/DICOM_data_software;C:/Users/lotop/OneDrive/Pulpit/Praktyki/DICOM_data_software/build/Desktop_Qt_5_15_1_MinGW_32_bit-Debug")
set(CPACK_CMAKE_GENERATOR "Ninja")
set(CPACK_COMPONENTS_ALL "Unspecified;runtime")
set(CPACK_COMPONENT_UNSPECIFIED_HIDDEN "TRUE")
set(CPACK_COMPONENT_UNSPECIFIED_REQUIRED "TRUE")
set(CPACK_CREATE_DESKTOP_LINKS "QMusic")
set(CPACK_DEFAULT_PACKAGE_DESCRIPTION_FILE "C:/Qta/Tools/CMake_64/share/cmake-3.29/Templates/CPack.GenericDescription.txt")
set(CPACK_DEFAULT_PACKAGE_DESCRIPTION_SUMMARY "qdcm built using CMake")
set(CPACK_DMG_SLA_USE_RESOURCE_FILE_LICENSE "ON")
set(CPACK_GENERATOR "NSIS")
set(CPACK_INNOSETUP_ARCHITECTURE "x86")
set(CPACK_INSTALL_CMAKE_PROJECTS "C:/Users/lotop/OneDrive/Pulpit/Praktyki/DICOM_data_software/build/Desktop_Qt_5_15_1_MinGW_32_bit-Debug;qdcm;ALL;/")
set(CPACK_INSTALL_PREFIX "C:/Program Files (x86)/qdcm")
set(CPACK_MODULE_PATH "C:/Users/lotop/OneDrive/Pulpit/Praktyki/DICOM_data_software/cmake")
set(CPACK_NSIS_CONTACT "arthur.benilov@gmail.com")
set(CPACK_NSIS_DISPLAY_NAME " QMusic")
set(CPACK_NSIS_DISPLAY_NAME_SET "TRUE")
set(CPACK_NSIS_HELP_LINK "http://github.com/Archie3d/qmusic")
set(CPACK_NSIS_INSTALLED_ICON_NAME "QMusic.exe")
set(CPACK_NSIS_INSTALLER_ICON_CODE "")
set(CPACK_NSIS_INSTALLER_MUI_ICON_CODE "")
set(CPACK_NSIS_INSTALL_ROOT "$PROGRAMFILES64")
set(CPACK_NSIS_MODIFY_PATH "ON")
set(CPACK_NSIS_PACKAGE_NAME " QMusic")
set(CPACK_NSIS_UNINSTALL_NAME "Uninstall")
set(CPACK_NSIS_URL_INFO_ABOUT "http://github.com/Archie3d/qmusic")
set(CPACK_OBJCOPY_EXECUTABLE "C:/Qta/Tools/mingw810_32/bin/objcopy.exe")
set(CPACK_OBJDUMP_EXECUTABLE "C:/Qta/Tools/mingw810_32/bin/objdump.exe")
set(CPACK_OUTPUT_CONFIG_FILE "C:/Users/lotop/OneDrive/Pulpit/Praktyki/DICOM_data_software/build/Desktop_Qt_5_15_1_MinGW_32_bit-Debug/CPackConfig.cmake")
set(CPACK_PACKAGE_DEFAULT_LOCATION "/")
set(CPACK_PACKAGE_DESCRIPTION_FILE "C:/Qta/Tools/CMake_64/share/cmake-3.29/Templates/CPack.GenericDescription.txt")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "QMusic")
set(CPACK_PACKAGE_EXECUTABLES "QMusic;QMusic")
set(CPACK_PACKAGE_FILE_NAME "qdcm-0.0.1-win32")
set(CPACK_PACKAGE_ICON "C:/Users/lotop/OneDrive/Pulpit/Praktyki/DICOM_data_software\\QMusic.bmp")
set(CPACK_PACKAGE_INSTALL_DIRECTORY "qdcm 0.0.1")
set(CPACK_PACKAGE_INSTALL_REGISTRY_KEY "qdcm 0.0.1")
set(CPACK_PACKAGE_NAME "qdcm")
set(CPACK_PACKAGE_RELOCATABLE "true")
set(CPACK_PACKAGE_VENDOR "Archie3d")
set(CPACK_PACKAGE_VERSION "0.0.1")
set(CPACK_PACKAGE_VERSION_MAJOR "0")
set(CPACK_PACKAGE_VERSION_MINOR "0")
set(CPACK_PACKAGE_VERSION_PATCH "1")
set(CPACK_READELF_EXECUTABLE "C:/Qta/Tools/mingw810_32/bin/readelf.exe")
set(CPACK_RESOURCE_FILE_LICENSE "C:/Users/lotop/OneDrive/Pulpit/Praktyki/DICOM_data_software\\license.txt")
set(CPACK_RESOURCE_FILE_README "C:/Qta/Tools/CMake_64/share/cmake-3.29/Templates/CPack.GenericDescription.txt")
set(CPACK_RESOURCE_FILE_WELCOME "C:/Qta/Tools/CMake_64/share/cmake-3.29/Templates/CPack.GenericWelcome.txt")
set(CPACK_SET_DESTDIR "OFF")
set(CPACK_SOURCE_7Z "ON")
set(CPACK_SOURCE_GENERATOR "7Z;ZIP")
set(CPACK_SOURCE_OUTPUT_CONFIG_FILE "C:/Users/lotop/OneDrive/Pulpit/Praktyki/DICOM_data_software/build/Desktop_Qt_5_15_1_MinGW_32_bit-Debug/CPackSourceConfig.cmake")
set(CPACK_SOURCE_ZIP "ON")
set(CPACK_SYSTEM_NAME "win32")
set(CPACK_THREADS "1")
set(CPACK_TOPLEVEL_TAG "win32")
set(CPACK_WIX_SIZEOF_VOID_P "4")

if(NOT CPACK_PROPERTIES_FILE)
  set(CPACK_PROPERTIES_FILE "C:/Users/lotop/OneDrive/Pulpit/Praktyki/DICOM_data_software/build/Desktop_Qt_5_15_1_MinGW_32_bit-Debug/CPackProperties.cmake")
endif()

if(EXISTS ${CPACK_PROPERTIES_FILE})
  include(${CPACK_PROPERTIES_FILE})
endif()

# Configuration for component "runtime"

SET(CPACK_COMPONENTS_ALL Unspecified runtime)
set(CPACK_COMPONENT_RUNTIME_DISPLAY_NAME "Main program files")
set(CPACK_COMPONENT_RUNTIME_DESCRIPTION "QMusic executables and dynamic libraries")
set(CPACK_COMPONENT_RUNTIME_GROUP Application)
set(CPACK_COMPONENT_RUNTIME_INSTALL_TYPES Full)

# Configuration for component "plugins"

SET(CPACK_COMPONENTS_ALL Unspecified runtime)
set(CPACK_COMPONENT_PLUGINS_DISPLAY_NAME "Plug-ins")
set(CPACK_COMPONENT_PLUGINS_DESCRIPTION "QMusic plug-ins")
set(CPACK_COMPONENT_PLUGINS_GROUP Application)
set(CPACK_COMPONENT_PLUGINS_DEPENDS runtime)
set(CPACK_COMPONENT_PLUGINS_INSTALL_TYPES Full)

# Configuration for component "patches"

SET(CPACK_COMPONENTS_ALL Unspecified runtime)
set(CPACK_COMPONENT_PATCHES_DISPLAY_NAME "Patches")
set(CPACK_COMPONENT_PATCHES_DESCRIPTION "QMusic ready to use patches")
set(CPACK_COMPONENT_PATCHES_GROUP Application)
set(CPACK_COMPONENT_PATCHES_DEPENDS runtime)
set(CPACK_COMPONENT_PATCHES_INSTALL_TYPES Full)
