# CMake generated Testfile for 
# Source directory: /media/alshef/Хранилище/Учеба/IV курс/7 семестр/Тестирование программного обеспечения/Labrab/ctest
# Build directory: /media/alshef/Хранилище/Учеба/IV курс/7 семестр/Тестирование программного обеспечения/Labrab/ctest
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(gtest_tests "tests/ctest-tests" "--gtest_output=xml:./ctest-tests.xml")
set_tests_properties(gtest_tests PROPERTIES  _BACKTRACE_TRIPLES "/media/alshef/Хранилище/Учеба/IV курс/7 семестр/Тестирование программного обеспечения/Labrab/ctest/CMakeLists.txt;19;add_test;/media/alshef/Хранилище/Учеба/IV курс/7 семестр/Тестирование программного обеспечения/Labrab/ctest/CMakeLists.txt;0;")
subdirs("app")
subdirs("external/googletest")
subdirs("tests")
