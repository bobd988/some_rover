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


set(CPACK_BUILD_SOURCE_DIRS "/home/demo/Public/github_px4/some/Firmware;/home/demo/Public/github_px4/some/Firmware/build/px4_sitl_default")
set(CPACK_CMAKE_GENERATOR "Ninja")
set(CPACK_COMPONENT_UNSPECIFIED_HIDDEN "TRUE")
set(CPACK_COMPONENT_UNSPECIFIED_REQUIRED "TRUE")
set(CPACK_DEBIAN_PACKAGE_DESCRIPTION "The PX4 Pro autopilot.")
set(CPACK_DEBIAN_PACKAGE_PRIORITY "optional")
set(CPACK_DEBIAN_PACKAGE_SECTION "devel")
set(CPACK_DEBIAN_PACKAGE_SHLIBDEPS "OFF")
set(CPACK_DEFAULT_PACKAGE_DESCRIPTION_FILE "/usr/local/share/cmake-3.20/Templates/CPack.GenericDescription.txt")
set(CPACK_DEFAULT_PACKAGE_DESCRIPTION_SUMMARY "px4 built using CMake")
set(CPACK_GENERATOR "TBZ2;DEB")
set(CPACK_INSTALL_CMAKE_PROJECTS "/home/demo/Public/github_px4/some/Firmware/build/px4_sitl_default;px4;ALL;/")
set(CPACK_INSTALL_PREFIX "/usr/local")
set(CPACK_MODULE_PATH "/home/demo/Public/github_px4/some/Firmware/cmake;/home/demo/Public/github_px4/some/Firmware/platforms/posix/cmake;/home/demo/Public/github_px4/some/Firmware/cmake/gtest/")
set(CPACK_NSIS_DISPLAY_NAME "px4-px4_sitl_default v1.11.0")
set(CPACK_NSIS_INSTALLER_ICON_CODE "")
set(CPACK_NSIS_INSTALLER_MUI_ICON_CODE "")
set(CPACK_NSIS_INSTALL_ROOT "$PROGRAMFILES")
set(CPACK_NSIS_PACKAGE_NAME "px4-px4_sitl_default v1.11.0")
set(CPACK_NSIS_UNINSTALL_NAME "Uninstall")
set(CPACK_OUTPUT_CONFIG_FILE "/home/demo/Public/github_px4/some/Firmware/build/px4_sitl_default/CPackConfig.cmake")
set(CPACK_PACKAGE_CONTACT "px4users@googlegroups.com")
set(CPACK_PACKAGE_DEFAULT_LOCATION "/")
set(CPACK_PACKAGE_DESCRIPTION_FILE "/usr/local/share/cmake-3.20/Templates/CPack.GenericDescription.txt")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "px4 built using CMake")
set(CPACK_PACKAGE_FILE_NAME "px4-px4_sitl_default-v1.11.0")
set(CPACK_PACKAGE_INSTALL_DIRECTORY "px4-px4_sitl_default v1.11.0")
set(CPACK_PACKAGE_INSTALL_REGISTRY_KEY "px4-px4_sitl_default v1.11.0")
set(CPACK_PACKAGE_NAME "px4-px4_sitl_default")
set(CPACK_PACKAGE_RELOCATABLE "true")
set(CPACK_PACKAGE_VENDOR "Humanity")
set(CPACK_PACKAGE_VERSION "v1.11.0")
set(CPACK_PACKAGE_VERSION_MAJOR "0")
set(CPACK_PACKAGE_VERSION_MINOR "1")
set(CPACK_PACKAGE_VERSION_PATCH "1")
set(CPACK_PACKAGING_INSTALL_PREFIX "")
set(CPACK_RESOURCE_FILE_LICENSE "/usr/local/share/cmake-3.20/Templates/CPack.GenericLicense.txt")
set(CPACK_RESOURCE_FILE_README "/usr/local/share/cmake-3.20/Templates/CPack.GenericDescription.txt")
set(CPACK_RESOURCE_FILE_WELCOME "/usr/local/share/cmake-3.20/Templates/CPack.GenericWelcome.txt")
set(CPACK_SET_DESTDIR "OFF")
set(CPACK_SOURCE_GENERATOR "ZIP;TBZ2")
set(CPACK_SOURCE_OUTPUT_CONFIG_FILE "/home/demo/Public/github_px4/some/Firmware/build/px4_sitl_default/CPackSourceConfig.cmake")
set(CPACK_SOURCE_PACKAGE_FILE_NAME "px4-v1.11.0")
set(CPACK_SYSTEM_NAME "Linux")
set(CPACK_THREADS "1")
set(CPACK_TOPLEVEL_TAG "Linux")
set(CPACK_WIX_SIZEOF_VOID_P "8")

if(NOT CPACK_PROPERTIES_FILE)
  set(CPACK_PROPERTIES_FILE "/home/demo/Public/github_px4/some/Firmware/build/px4_sitl_default/CPackProperties.cmake")
endif()

if(EXISTS ${CPACK_PROPERTIES_FILE})
  include(${CPACK_PROPERTIES_FILE})
endif()
