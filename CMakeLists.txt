project(agl-service-example)

set(CMAKE_POSITION_INDEPENDENT_CODE ON)

target_link_libraries(afb-daemon)

file(GLOB SOURCES "agl-service-example.c")

add_library(agl-service-example SHARED ${SOURCES})

install(TARGETS agl-service-example DESTINATION /usr/lib)
