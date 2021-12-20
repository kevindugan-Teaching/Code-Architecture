enable_testing()

add_executable(test_StandardVector test_StandardVector.cpp)
target_link_libraries(test_StandardVector Vector gmock_main)
add_test(NAME Test_StandardVector COMMAND test_StandardVector)