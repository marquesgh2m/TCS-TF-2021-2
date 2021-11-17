#include "unity.h"
#include "unity_fixture.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "sort.h"

#define SIZE 10

const int normal_case_positive_vector[] = {1,0,3,2,5,4,7,6,9,8};
const int worst_case_positive_vector[] = {9,8,7,6,5,4,3,2,1,0};
const int normal_case_negative_vector[] = {-8,-9,-6,-7,-4,-3,-2,-1,0,-5};
const int worst_case_negative_vector[] = {0,-1,-2,-3,-4,-5,-6,-7,-8,-9};
const int expected_positive_vector[] = {0,1,2,3,4,5,6,7,8,9};
const int expected_negative_vector[] = {-9,-8,-7,-6,-5,-4,-3,-2,-1,0};
const int equal_case_positive_vector[] = {1,1,0,3,3,2,5,5,4,4};
const int equal_case_negative_vector[] = {-8,-8,-9,-6,-6,-7,-4,-4,-5,-5};
const int expected_equal_positive_vector[] = {0,1,1,2,3,3,4,4,5,5};
const int expected_equal_negative_vector[] = {-9,-8,-8,-7,-6,-6,-5,-5,-4,-4};

// Print function for debug purposes
// EX: printv("in", output, SIZE);
void printv(char *txt, int * v_, int size_){
    int n;
    printf("\n\t%s:", txt);
    for(n=0;n<size_;n++) {
       printf("%d ", v_[n]);
    }
    printf("\n");
}

TEST_GROUP(Sort);

// Antes do teste unitario
TEST_SETUP(Sort)
{   
    
}

// Depois do teste unitario
TEST_TEAR_DOWN(Sort)
{

}

/////////////////////////////////////////////////////////////////////////////////// 
/////////////////////////// SELECTION SORT
TEST(Sort,SelectionSortNormalCasePositive){
    int output[SIZE];
    memcpy(output, normal_case_positive_vector, SIZE * sizeof(int));

    sort_array(output, SIZE, SELECTION);

    for (int i = 0; i < SIZE; ++i)
    {
        TEST_ASSERT_EQUAL(expected_positive_vector[i],output[i]);
    }
}
TEST(Sort,SelectionSortWorstCasePositive){
    int output[SIZE];
    memcpy(output, worst_case_positive_vector, SIZE * sizeof(int));

    sort_array(output, SIZE, SELECTION);

    for (int i = 0; i < SIZE; ++i)
    {
        TEST_ASSERT_EQUAL(expected_positive_vector[i],output[i]);
    }
}
TEST(Sort,SelectionSortEqualCasePositive){
    int output[SIZE];
    memcpy(output, equal_case_positive_vector, SIZE * sizeof(int));

    //printv("in", output, SIZE);
    sort_array(output, SIZE, SELECTION);
    //printv("out", output, SIZE);

    for (int i = 0; i < SIZE; ++i)
    {
        TEST_ASSERT_EQUAL(expected_equal_positive_vector[i],output[i]);
    }
}

TEST(Sort,SelectionSortNormalCaseNegative){
    int output[SIZE];
    memcpy(output, normal_case_negative_vector, SIZE * sizeof(int));

    //printv("in", output, SIZE);
    sort_array(output, SIZE, SELECTION);
    //printv("out", output, SIZE);


    for (int i = 0; i < SIZE; ++i)
    {
        TEST_ASSERT_EQUAL(expected_negative_vector[i],output[i]);
    }
}
TEST(Sort,SelectionSortWorstCaseNegative){
    int output[SIZE];
    memcpy(output, worst_case_negative_vector, SIZE * sizeof(int));

    //printv("in", output, SIZE);
    sort_array(output, SIZE, SELECTION);
    //printv("out", output, SIZE);

    for (int i = 0; i < SIZE; ++i)
    {
        TEST_ASSERT_EQUAL(expected_negative_vector[i],output[i]);
    }
}
TEST(Sort,SelectionSortEqualCaseNegative){
    int output[SIZE];
    memcpy(output, equal_case_negative_vector, SIZE * sizeof(int));

    //printv("in", output, SIZE);
    sort_array(output, SIZE, SELECTION);
    //printv("out", output, SIZE);

    for (int i = 0; i < SIZE; ++i)
    {
        TEST_ASSERT_EQUAL(expected_equal_negative_vector[i],output[i]);
    }
}

/////////////////////////////////////////////////////////////////////////////////// 
/////////////////////////// INSERTION SORT
TEST(Sort,InsertionSortNormalCasePositive){
    int output[SIZE];
    memcpy(output, normal_case_positive_vector, SIZE * sizeof(int));

    sort_array(output, SIZE, INSERTION);

    for (int i = 0; i < SIZE; ++i)
    {
        TEST_ASSERT_EQUAL(expected_positive_vector[i],output[i]);
    }
}
TEST(Sort,InsertionSortWorstCasePositive){
    int output[SIZE];
    memcpy(output, worst_case_positive_vector, SIZE * sizeof(int));

    sort_array(output, SIZE, INSERTION);

    for (int i = 0; i < SIZE; ++i)
    {
        TEST_ASSERT_EQUAL(expected_positive_vector[i],output[i]);
    }
}
TEST(Sort,InsertionSortEqualCasePositive){
    int output[SIZE];
    memcpy(output, equal_case_positive_vector, SIZE * sizeof(int));

    //printv("in", output, SIZE);
    sort_array(output, SIZE, INSERTION);
    //printv("out", output, SIZE);

    for (int i = 0; i < SIZE; ++i)
    {
        TEST_ASSERT_EQUAL(expected_equal_positive_vector[i],output[i]);
    }
}

TEST(Sort,InsertionSortNormalCaseNegative){
    int output[SIZE];
    memcpy(output, normal_case_negative_vector, SIZE * sizeof(int));

    //printv("in", output, SIZE);
    sort_array(output, SIZE, INSERTION);
    //printv("out", output, SIZE);


    for (int i = 0; i < SIZE; ++i)
    {
        TEST_ASSERT_EQUAL(expected_negative_vector[i],output[i]);
    }
}
TEST(Sort,InsertionSortWorstCaseNegative){
    int output[SIZE];
    memcpy(output, worst_case_negative_vector, SIZE * sizeof(int));

    //printv("in", output, SIZE);
    sort_array(output, SIZE, INSERTION);
    //printv("out", output, SIZE);

    for (int i = 0; i < SIZE; ++i)
    {
        TEST_ASSERT_EQUAL(expected_negative_vector[i],output[i]);
    }
}
TEST(Sort,InsertionSortEqualCaseNegative){
    int output[SIZE];
    memcpy(output, equal_case_negative_vector, SIZE * sizeof(int));

    //printv("in", output, SIZE);
    sort_array(output, SIZE, INSERTION);
    //printv("out", output, SIZE);

    for (int i = 0; i < SIZE; ++i)
    {
        TEST_ASSERT_EQUAL(expected_equal_negative_vector[i],output[i]);
    }
}

/////////////////////////////////////////////////////////////////////////////////// 
/////////////////////////// SHELL SORT
TEST(Sort,ShellSortNormalCasePositive){
    int output[SIZE];
    memcpy(output, normal_case_positive_vector, SIZE * sizeof(int));

    sort_array(output, SIZE, SHELL);

    for (int i = 0; i < SIZE; ++i)
    {
        TEST_ASSERT_EQUAL(expected_positive_vector[i],output[i]);
    }
}
TEST(Sort,ShellSortWorstCasePositive){
    int output[SIZE];
    memcpy(output, worst_case_positive_vector, SIZE * sizeof(int));

    sort_array(output, SIZE, SHELL);

    for (int i = 0; i < SIZE; ++i)
    {
        TEST_ASSERT_EQUAL(expected_positive_vector[i],output[i]);
    }
}
TEST(Sort,ShellSortEqualCasePositive){
    int output[SIZE];
    memcpy(output, equal_case_positive_vector, SIZE * sizeof(int));

    //printv("in", output, SIZE);
    sort_array(output, SIZE, SHELL);
    //printv("out", output, SIZE);

    for (int i = 0; i < SIZE; ++i)
    {
        TEST_ASSERT_EQUAL(expected_equal_positive_vector[i],output[i]);
    }
}

TEST(Sort,ShellSortNormalCaseNegative){
    int output[SIZE];
    memcpy(output, normal_case_negative_vector, SIZE * sizeof(int));

    //printv("in", output, SIZE);
    sort_array(output, SIZE, SHELL);
    //printv("out", output, SIZE);


    for (int i = 0; i < SIZE; ++i)
    {
        TEST_ASSERT_EQUAL(expected_negative_vector[i],output[i]);
    }
}
TEST(Sort,ShellSortWorstCaseNegative){
    int output[SIZE];
    memcpy(output, worst_case_negative_vector, SIZE * sizeof(int));

    //printv("in", output, SIZE);
    sort_array(output, SIZE, SHELL);
    //printv("out", output, SIZE);

    for (int i = 0; i < SIZE; ++i)
    {
        TEST_ASSERT_EQUAL(expected_negative_vector[i],output[i]);
    }
}
TEST(Sort,ShellSortEqualCaseNegative){
    int output[SIZE];
    memcpy(output, equal_case_negative_vector, SIZE * sizeof(int));

    //printv("in", output, SIZE);
    sort_array(output, SIZE, SHELL);
    //printv("out", output, SIZE);

    for (int i = 0; i < SIZE; ++i)
    {
        TEST_ASSERT_EQUAL(expected_equal_negative_vector[i],output[i]);
    }
}


/////////////////////////////////////////////////////////////////////////////////// 
/////////////////////////// QUICK SORT
///////////////////////////////////////////////////////////////////////////////////////////////////////////
TEST(Sort,QuickSortNormalCasePositive){
    int output[SIZE];
    memcpy(output, normal_case_positive_vector, SIZE * sizeof(int));

    sort_array(output, SIZE, QUICK);

    for (int i = 0; i < SIZE; ++i)
    {
        TEST_ASSERT_EQUAL(expected_positive_vector[i],output[i]);
    }
}
TEST(Sort,QuickSortWorstCasePositive){
    int output[SIZE];
    memcpy(output, worst_case_positive_vector, SIZE * sizeof(int));

    sort_array(output, SIZE, QUICK);

    for (int i = 0; i < SIZE; ++i)
    {
        TEST_ASSERT_EQUAL(expected_positive_vector[i],output[i]);
    }
}
TEST(Sort,QuickSortEqualCasePositive){
    int output[SIZE];
    memcpy(output, equal_case_positive_vector, SIZE * sizeof(int));

    //printv("in", output, SIZE);
    sort_array(output, SIZE, QUICK);
    //printv("out", output, SIZE);

    for (int i = 0; i < SIZE; ++i)
    {
        TEST_ASSERT_EQUAL(expected_equal_positive_vector[i],output[i]);
    }
}

TEST(Sort,QuickSortNormalCaseNegative){
    int output[SIZE];
    memcpy(output, normal_case_negative_vector, SIZE * sizeof(int));

    //printv("in", output, SIZE);
    sort_array(output, SIZE, QUICK);
    //printv("out", output, SIZE);


    for (int i = 0; i < SIZE; ++i)
    {
        TEST_ASSERT_EQUAL(expected_negative_vector[i],output[i]);
    }
}
TEST(Sort,QuickSortWorstCaseNegative){
    int output[SIZE];
    memcpy(output, worst_case_negative_vector, SIZE * sizeof(int));

    //printv("in", output, SIZE);
    sort_array(output, SIZE, QUICK);
    //printv("out", output, SIZE);

    for (int i = 0; i < SIZE; ++i)
    {
        TEST_ASSERT_EQUAL(expected_negative_vector[i],output[i]);
    }
}
TEST(Sort,QuickSortEqualCaseNegative){
    int output[SIZE];
    memcpy(output, equal_case_negative_vector, SIZE * sizeof(int));

    //printv("in", output, SIZE);
    sort_array(output, SIZE, QUICK);
    //printv("out", output, SIZE);

    for (int i = 0; i < SIZE; ++i)
    {
        TEST_ASSERT_EQUAL(expected_equal_negative_vector[i],output[i]);
    }
}

/////////////////////////////////////////////////////////////////////////////////// 
/////////////////////////// HEAP SORT
TEST(Sort,HeapSortNormalCasePositive){
    int output[SIZE];
    memcpy(output, normal_case_positive_vector, SIZE * sizeof(int));

    sort_array(output, SIZE, HEAP);

    for (int i = 0; i < SIZE; ++i)
    {
        TEST_ASSERT_EQUAL(expected_positive_vector[i],output[i]);
    }
}
TEST(Sort,HeapSortWorstCasePositive){
    int output[SIZE];
    memcpy(output, worst_case_positive_vector, SIZE * sizeof(int));

    sort_array(output, SIZE, HEAP);

    for (int i = 0; i < SIZE; ++i)
    {
        TEST_ASSERT_EQUAL(expected_positive_vector[i],output[i]);
    }
}
TEST(Sort,HeapSortEqualCasePositive){
    int output[SIZE];
    memcpy(output, equal_case_positive_vector, SIZE * sizeof(int));

    //printv("in", output, SIZE);
    sort_array(output, SIZE, HEAP);
    //printv("out", output, SIZE);

    for (int i = 0; i < SIZE; ++i)
    {
        TEST_ASSERT_EQUAL(expected_equal_positive_vector[i],output[i]);
    }
}

TEST(Sort,HeapSortNormalCaseNegative){
    int output[SIZE];
    memcpy(output, normal_case_negative_vector, SIZE * sizeof(int));

    //printv("in", output, SIZE);
    sort_array(output, SIZE, HEAP);
    //printv("out", output, SIZE);


    for (int i = 0; i < SIZE; ++i)
    {
        TEST_ASSERT_EQUAL(expected_negative_vector[i],output[i]);
    }
}
TEST(Sort,HeapSortWorstCaseNegative){
    int output[SIZE];
    memcpy(output, worst_case_negative_vector, SIZE * sizeof(int));

    //printv("in", output, SIZE);
    sort_array(output, SIZE, HEAP);
    //printv("out", output, SIZE);

    for (int i = 0; i < SIZE; ++i)
    {
        TEST_ASSERT_EQUAL(expected_negative_vector[i],output[i]);
    }
}
TEST(Sort,HeapSortEqualCaseNegative){
    int output[SIZE];
    memcpy(output, equal_case_negative_vector, SIZE * sizeof(int));

    //printv("in", output, SIZE);
    sort_array(output, SIZE, HEAP);
    //printv("out", output, SIZE);

    for (int i = 0; i < SIZE; ++i)
    {
        TEST_ASSERT_EQUAL(expected_equal_negative_vector[i],output[i]);
    }
}

/////////////////////////////////////////////////////////////////////////////////// 
/////////////////////////// MERGE SORT
TEST(Sort,MergeSortNormalCasePositive){
    int output[SIZE];
    memcpy(output, normal_case_positive_vector, SIZE * sizeof(int));

    sort_array(output, SIZE, MERGE);

    for (int i = 0; i < SIZE; ++i)
    {
        TEST_ASSERT_EQUAL(expected_positive_vector[i],output[i]);
    }
}
TEST(Sort,MergeSortWorstCasePositive){
    int output[SIZE];
    memcpy(output, worst_case_positive_vector, SIZE * sizeof(int));

    sort_array(output, SIZE, MERGE);

    for (int i = 0; i < SIZE; ++i)
    {
        TEST_ASSERT_EQUAL(expected_positive_vector[i],output[i]);
    }
}
TEST(Sort,MergeSortEqualCasePositive){
    int output[SIZE];
    memcpy(output, equal_case_positive_vector, SIZE * sizeof(int));

    //printv("in", output, SIZE);
    sort_array(output, SIZE, MERGE);
    //printv("out", output, SIZE);

    for (int i = 0; i < SIZE; ++i)
    {
        TEST_ASSERT_EQUAL(expected_equal_positive_vector[i],output[i]);
    }
}

TEST(Sort,MergeSortNormalCaseNegative){
    int output[SIZE];
    memcpy(output, normal_case_negative_vector, SIZE * sizeof(int));

    //printv("in", output, SIZE);
    sort_array(output, SIZE, MERGE);
    //printv("out", output, SIZE);


    for (int i = 0; i < SIZE; ++i)
    {
        TEST_ASSERT_EQUAL(expected_negative_vector[i],output[i]);
    }
}
TEST(Sort,MergeSortWorstCaseNegative){
    int output[SIZE];
    memcpy(output, worst_case_negative_vector, SIZE * sizeof(int));

    //printv("in", output, SIZE);
    sort_array(output, SIZE, MERGE);
    //printv("out", output, SIZE);

    for (int i = 0; i < SIZE; ++i)
    {
        TEST_ASSERT_EQUAL(expected_negative_vector[i],output[i]);
    }
}
TEST(Sort,MergeSortEqualCaseNegative){
    int output[SIZE];
    memcpy(output, equal_case_negative_vector, SIZE * sizeof(int));

    //printv("in", output, SIZE);
    sort_array(output, SIZE, MERGE);
    //printv("out", output, SIZE);

    for (int i = 0; i < SIZE; ++i)
    {
        TEST_ASSERT_EQUAL(expected_equal_negative_vector[i],output[i]);
    }
}

