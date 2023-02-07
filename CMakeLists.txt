cmake_minimum_required(VERSION 3.0.2)
project(Builder)

set(CMAKE_BUILD_TYPE Release)

set(SRC_DIR src)
set(LIB_DIR lib)
set(BIN_DIR bin)
set(INCLUDE_DIR include)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${LIB_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${BIN_DIR})

set(TARGET_NO_BUILDER no_builder)
set(TARGET_SIMPLE_BUILDER simple_builder)
set(TARGET_FLUENT_BUILDER fluent_builder)
set(TARGET_BETTER_FLUENT_BUILDER better_fluent_builder)
set(TARGET_GROOVY_BUILDER groovy_builder)
set(TARGET_COMPLEX_BUILDER complex_builder)

include_directories(${INCLUDE_DIR} "/export/devel/platform/boost/$ENV{BOOST_VERSION}/boost/include")

link_directories( ${LIB_DIR} )
#set(APP_LINK_LIBS ${TARGET_LIB} dcpsisocpp2 ddskernel dl pthread)

set(CMAKE_CXX_FLAGS "-fPIC -O3 -Wall -Wno-unused-function -std=c++20")

set(SOURCES_NO_BUILDER ${SRC_DIR}/NoBuilder.cpp)
set(SOURCES_SIMPLE_BUILDER ${SRC_DIR}/SimpleBuilder.cpp)
set(SOURCES_FLUENT_BUILDER ${SRC_DIR}/FluentBuilder.cpp)
set(SOURCES_BETTER_FLUENT_BUILDER ${SRC_DIR}/BetterFluentBuilder.cpp)
set(SOURCES_GROOVY_BUILDER ${SRC_DIR}/GroovyBuilder.cpp)
set(SOURCES_COMPLEX_BUILDER ${SRC_DIR}/Person.cpp ${SRC_DIR}/PersonBuilder.cpp ${SRC_DIR}/ComplexBuilder.cpp)


#add_library(${TARGET_LIB} STATIC ${SOURCES_LIB})

add_executable(${TARGET_NO_BUILDER} ${SOURCES_NO_BUILDER})
add_executable(${TARGET_SIMPLE_BUILDER} ${SOURCES_SIMPLE_BUILDER})
add_executable(${TARGET_FLUENT_BUILDER} ${SOURCES_FLUENT_BUILDER})
add_executable(${TARGET_BETTER_FLUENT_BUILDER} ${SOURCES_BETTER_FLUENT_BUILDER})
add_executable(${TARGET_GROOVY_BUILDER} ${SOURCES_GROOVY_BUILDER})
add_executable(${TARGET_COMPLEX_BUILDER} ${SOURCES_COMPLEX_BUILDER})

#target_link_libraries(${TARGET_SUB} ${APP_LINK_LIBS})

#add_dependencies( ${TARGET_SUB} ${TARGET_LIB} )
