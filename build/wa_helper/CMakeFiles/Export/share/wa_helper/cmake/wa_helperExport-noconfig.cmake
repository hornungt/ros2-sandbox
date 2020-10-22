#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "wa_helper::wa_helper" for configuration ""
set_property(TARGET wa_helper::wa_helper APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(wa_helper::wa_helper PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libwa_helper.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS wa_helper::wa_helper )
list(APPEND _IMPORT_CHECK_FILES_FOR_wa_helper::wa_helper "${_IMPORT_PREFIX}/lib/libwa_helper.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
