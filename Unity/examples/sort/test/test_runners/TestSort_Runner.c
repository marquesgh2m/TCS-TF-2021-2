#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Sort)
{

    /////////////////////////////////////////////////////////////////////////////////// 
    /////////////////////////// SORT
    RUN_TEST_CASE(Sort, SelectionSortNormalCasePositive);
    RUN_TEST_CASE(Sort, SelectionSortWorstCasePositive);
    RUN_TEST_CASE(Sort, SelectionSortEqualCasePositive);

    RUN_TEST_CASE(Sort, SelectionSortNormalCaseNegative);
    RUN_TEST_CASE(Sort, SelectionSortWorstCaseNegative);
    RUN_TEST_CASE(Sort, SelectionSortEqualCaseNegative);

    /////////////////////////////////////////////////////////////////////////////////// 
    /////////////////////////// INSERTION SORT
    RUN_TEST_CASE(Sort, InsertionSortNormalCasePositive);
    RUN_TEST_CASE(Sort, InsertionSortWorstCasePositive);
    RUN_TEST_CASE(Sort, InsertionSortEqualCasePositive);

    RUN_TEST_CASE(Sort, InsertionSortNormalCaseNegative);
    RUN_TEST_CASE(Sort, InsertionSortWorstCaseNegative);
    RUN_TEST_CASE(Sort, InsertionSortEqualCaseNegative);

    /////////////////////////////////////////////////////////////////////////////////// 
    /////////////////////////// SHELL SORT

    /////////////////////////////////////////////////////////////////////////////////// 
    /////////////////////////// QUICK SORT

    /////////////////////////////////////////////////////////////////////////////////// 
    /////////////////////////// HEAP SORT

    /////////////////////////////////////////////////////////////////////////////////// 
    /////////////////////////// MERGE SORT


    //RUN_TEST_CASE(Sort, insertion_sort_test1);

    //RUN_TEST_CASE(Sort, shell_sort_test1);

    //RUN_TEST_CASE(Sort, quick_sort_test1);

    //RUN_TEST_CASE(Sort, heap_sort_test1);

    //RUN_TEST_CASE(Sort, merge_sort_test1);
}
