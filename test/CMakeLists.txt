add_executable(unit_tests test.cpp)

target_include_directories(unit_tests PRIVATE ${PROJECT_SOURCE_DIR}/src ${GTEST_INCLUDE_DIRS})

target_link_libraries(unit_tests PRIVATE test_lib GTest::Main)

add_test(
    NAME unit_tests
    COMMAND unit_tests)
