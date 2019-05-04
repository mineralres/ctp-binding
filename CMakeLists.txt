project(ctp-binding)
cmake_minimum_required(VERSION 2.8.11)
include_directories(${PROJECT_SOURCE_DIR})
include_directories(${PROJECT_SOURCE_DIR}/ext)
include_directories(${PROJECT_SOURCE_DIR}/ext/include)

set (Boost_USE_MULTITHREADED ON)
set (Boost_NO_SYSTEM_PATHS ON)

# only win32 supported
IF (WIN32)
    include_directories(${PROJECT_SOURCE_DIR}/ext/include/windows)
    ADD_DEFINITIONS(-D_WIN32_WINNT=0x601)
    ADD_DEFINITIONS(-DUNICODE -D_UNICODE)
    ADD_DEFINITIONS(-DWIN32_LEAN_AND_MEAN)
    ADD_DEFINITIONS(-DBOOST_ASIO_DISABLE_STD_CHRONO)
    LINK_DIRECTORIES(${PROJECT_SOURCE_DIR}/ext/lib/windows/x64)
ENDIF()

if (${CMAKE_GENERATOR} MATCHES "Visual Studio *")
	SET(CMAKE_CXX_FLAGS_RELWITHDEBINFO "${CMAKE_CXX_FLAGS_RELWITHDEBINFO} /Od /MP /MT") 
	SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MP /MT") 
endif ()

#add_subdirectory(base)
IF(WIN32)
    add_subdirectory(binding)
    add_subdirectory(${PROJECT_SOURCE_DIR}/ext/include/windows/pb)
ENDIF()
