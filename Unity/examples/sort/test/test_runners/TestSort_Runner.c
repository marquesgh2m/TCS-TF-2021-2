#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Sort)
{

    /////////////////////////////////////////////////////////////////////////////////// 
    /////////////////////////// SELECTION SORT
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
    RUN_TEST_CASE(Sort, ShellSortNormalCasePositive);
    RUN_TEST_CASE(Sort, ShellSortWorstCasePositive);
    RUN_TEST_CASE(Sort, ShellSortEqualCasePositive);

    RUN_TEST_CASE(Sort, ShellSortNormalCaseNegative);
    RUN_TEST_CASE(Sort, ShellSortWorstCaseNegative);
    RUN_TEST_CASE(Sort, ShellSortEqualCaseNegative);

    /////////////////////////////////////////////////////////////////////////////////// 
    /////////////////////////// QUICK SORT
    RUN_TEST_CASE(Sort, QuickSortNormalCasePositive);
    RUN_TEST_CASE(Sort, QuickSortWorstCasePositive);
    RUN_TEST_CASE(Sort, QuickSortEqualCasePositive);

    RUN_TEST_CASE(Sort, QuickSortNormalCaseNegative);
    RUN_TEST_CASE(Sort, QuickSortWorstCaseNegative);
    RUN_TEST_CASE(Sort, QuickSortEqualCaseNegative);

    /////////////////////////////////////////////////////////////////////////////////// 
    /////////////////////////// HEAP SORT
    RUN_TEST_CASE(Sort, HeapSortNormalCasePositive);
    RUN_TEST_CASE(Sort, HeapSortWorstCasePositive);
    RUN_TEST_CASE(Sort, HeapSortEqualCasePositive);

    RUN_TEST_CASE(Sort, HeapSortNormalCaseNegative);
    RUN_TEST_CASE(Sort, HeapSortWorstCaseNegative);
    RUN_TEST_CASE(Sort, HeapSortEqualCaseNegative);

    /////////////////////////////////////////////////////////////////////////////////// 
    /////////////////////////// MERGE SORT
    RUN_TEST_CASE(Sort, MergeSortNormalCasePositive);
    RUN_TEST_CASE(Sort, MergeSortWorstCasePositive);
    RUN_TEST_CASE(Sort, MergeSortEqualCasePositive);

    RUN_TEST_CASE(Sort, MergeSortNormalCaseNegative);
    RUN_TEST_CASE(Sort, MergeSortWorstCaseNegative);
    RUN_TEST_CASE(Sort, MergeSortEqualCaseNegative);
}
