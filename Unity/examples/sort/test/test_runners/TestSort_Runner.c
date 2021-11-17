#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Sort)
{
    RUN_TEST_CASE(Sort, SelectionSortNormalCasePositive);
    RUN_TEST_CASE(Sort, SelectionSortWorstCasePositive);
    RUN_TEST_CASE(Sort, SelectionSortEqualCasePositive);

    RUN_TEST_CASE(Sort, SelectionSortNormalCaseNegative);
    RUN_TEST_CASE(Sort, SelectionSortWorstCaseNegative);
    RUN_TEST_CASE(Sort, SelectionSortEqualCaseNegative);


    //RUN_TEST_CASE(Sort, insertion_sort_test1);

    //RUN_TEST_CASE(Sort, shell_sort_test1);

    //RUN_TEST_CASE(Sort, quick_sort_test1);

    //RUN_TEST_CASE(Sort, heap_sort_test1);

    //RUN_TEST_CASE(Sort, merge_sort_test1);
}
