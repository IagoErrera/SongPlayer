# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/appSongPlayer_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/appSongPlayer_autogen.dir/ParseCache.txt"
  "appSongPlayer_autogen"
  )
endif()
