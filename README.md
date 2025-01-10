[![CI/CD GitHub Actions](https://github.com/seekerk/ctest/actions/workflows/test-action.yml/badge.svg)](https://github.com/seekerk/ctest/actions/workflows/test-action.yml)
[![Coverage Status](https://coveralls.io/repos/seekerk/ctest/badge.svg?branch=main)](https://coveralls.io/github/seekerk/ctest?branch=main)
[![Quality Gate](https://sonarcloud.io/api/project_badges/measure?project=seekerk_ctest&metric=alert_status)](https://sonarcloud.io/dashboard?id=seekerk_ctest)
[![Bugs](https://sonarcloud.io/api/project_badges/measure?project=seekerk_ctest&metric=bugs)](https://sonarcloud.io/summary/new_code?id=seekerk_ctest)
[![Code smells](https://sonarcloud.io/api/project_badges/measure?project=seekerk_ctest&metric=code_smells)](https://sonarcloud.io/dashboard?id=seekerk_ctest)

### План функционального тестирования
1. Идентификатор плана тестирования (ID)
      ID = Test_PO_01. 
2. Список функций для тестирования
      Тестированию подвергается одна функция вычисления корней квадратного уравнения
      `void formula(double a, double b, double c, double* root1, double* root2)`
3. Подход
      Тестирование должно проходить в автоматическом режиме. В каталоге `tests/` подготовлен файл `formula-test.h`, содержащий макросы `TEST`.
      Запуск осуществляется функцией `RUN_ALL_TESTS()` из драйвера запуска тестов `main.cpp` в том же каталоге `tests/`. 
      Все тесты входят в один набор `formulaTest`:
      - тест `a0` осуществляет проверку, является ли уравнение квадратным;
      - тест `2_roots` ожидает два корня уравнения при положительном дискриминанте;
      - тест `1_root` ожидает один корень уравнения при нулевом дискриминанте;
      - тест `0_root` ожидает нули в обоих корнях при отрицательном дискриминанте.
4. Критерии прохождения и провала
      Тестирование проводится сравнительным утверждением `ASSERT_EQ(expected, actual);`, результатом которого может быть критический отказ (fatal failure). В тестируемую функцию передаются входные параметры, а результаты ее работы сравниваются с ожидаемой величиной.
      Критерием прохождения теста является точное совпадение реальной и ожидаемой величин. 
      - В выводе `gtest-tests` секция `Run make CTEST_OUTPUT_ON_FAILURE=1 test` в разделе `CI/CD GitHub Action`положительным прохожденим теста является запись `100% tests passed, 0 tests failed out of 1`. 
      - В случае отрицательного результата запись будет иметь следующий вид `Error: Process completed with exit code XX.`, также появятся записи вида `[  FAILED  ]`, указывающие какой конкретно тест провален.
5. Результаты тестирования
      Все тесты должны проходить успешно.
6. Инструменты и ресурсы
      Основным инструментом проверки является `Google testing framework (gtest)` на платформе непрерывной интеграции и непрерывной доставки `CI/CD GitHub Actions`.
