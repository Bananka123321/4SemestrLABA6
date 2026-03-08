add_executable(DietApp main.cpp)

target_include_directories(DietApp PRIVATE ${CMAKE_SOURCE_DIR}/DietDLL/include)

target_link_libraries(DietApp DietDLL)