include_directories(.)
include_directories(../lib)

file(GLOB_RECURSE SRCS *.cpp)

add_executable(libraries_example ${SRCS})

target_link_libraries(libraries_example message)