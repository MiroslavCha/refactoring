
add_executable(unit_tests test.cpp)

target_include_directories(unit_tests PRIVATE ${PROJECT_SOURCE_DIR}/src)
target_link_libraries(unit_tests PRIVATE gtest_main test_lib)

add_test(
    NAME unit_tests
    COMMAND unit_tests)
