cmake_minimum_required(VERSION 3.15)
project(Dillo VERSION 1.0 LANGUAGES C CXX)

# Specify C and C++ standards
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED True)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(${PROJECT_SOURCE_DIR})
include_directories(${PROJECT_SOURCE_DIR}/dlib)
include_directories(${PROJECT_SOURCE_DIR}/dpi)
include_directories(${PROJECT_SOURCE_DIR}/dpid)

# Source files
set(DLIB_SOURCES
    dlib/dlib.c
)

set(DPI_SOURCES
    dpi/bookmarks.c
    dpi/cookies.c
    dpi/datauri.c
    dpi/downloads.cc
    dpi/dpiutil.c
    dpi/file.c
    dpi/ftp.c
    dpi/hello.c
    dpi/vsource.c
)

set(DPID_SOURCES
    dpid/dpi.c
    dpid/dpid.c
    dpid/dpidc.c
    dpid/dpid_common.c
    dpid/dpi_socket_dir.c
    dpid/main.c
)

# Executable
add_executable(Dillo 
    ${DLIB_SOURCES} 
    ${DPI_SOURCES} 
    ${DPID_SOURCES}
)

# Link libraries if there are any, e.g., FLTK, OpenSSL, etc.
# target_link_libraries(Dillo PRIVATE fltk)

# Compiler options
target_compile_options(Dillo PRIVATE -Wall -Wextra)

# Installation rules
install(TARGETS Dillo RUNTIME DESTINATION bin)

