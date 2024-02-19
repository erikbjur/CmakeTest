file(GLOB_RECURSE SRC_FILES *.cpp)

add_library(message STATIC ${SRC_FILES})