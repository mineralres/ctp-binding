cmake_minimum_required(VERSION 2.6)

if (${CMAKE_GENERATOR} MATCHES "Visual Studio 15 *" OR ${CMAKE_GENERATOR} MATCHES "Visual Studio 12 *")
    set (CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /SAFESEH:NO")
endif ()
set(APP binding)

if(WIN32)
    include_directories(${PROJECT_SOURCE_DIR}/ext/include/windows/ctp6.3.11)
	LINK_DIRECTORIES(${PROJECT_SOURCE_DIR}/ext/lib/windows/x64/ctp6.3.11)
endif()


AUX_SOURCE_DIRECTORY(. LIB_SRC)
file (GLOB_RECURSE HEADERS "${PROJECT_SOURCE_DIR}/${APP}/*.hpp")
file (GLOB HEADERS  ${HEADERS} "${PROJECT_SOURCE_DIR}/${APP}/*.h")
add_library(${APP} SHARED ${LIB_SRC})

set_target_properties(${APP} PROPERTIES OUTPUT_NAME "binding")
TARGET_LINK_LIBRARIES(${APP} )

if(WIN32)
TARGET_LINK_LIBRARIES(${APP} libpbwin thostmduserapi thosttraderapi libprotobuf.lib)
endif()
if(UNIX)
target_link_libraries(${APP})
endif()
