set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/tests)
set(CTEST_BINARY_DIRECTORY ${PROJECT_BINARY_DIR}/tests)

file(GLOB files "*_test.cpp")


foreach(file ${files})
    string(REGEX REPLACE "(^.*/|\\.[^.]*$)" "" file_without_ext ${file})
    add_executable(${file_without_ext} ${file})
    target_link_libraries(${file_without_ext} ${PROJECT_LIBS})
    add_test(${file_without_ext} ${file_without_ext})
    set_tests_properties(${file_without_ext}
            PROPERTIES
            TIMEOUT 120)
    add_dependencies(${file_without_ext} monkey)

    target_include_directories(${file_without_ext} PUBLIC "../src")
    target_link_libraries(${file_without_ext} PUBLIC monkey)
endforeach()