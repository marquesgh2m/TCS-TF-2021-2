#include "unity.h"
#include "unity_fixture.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../../../../sort.h"

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

    printv("in", output, SIZE);
    sort_array(output, SIZE, SELECTION);
    printv("out", output, SIZE);


    for (int i = 0; i < SIZE; ++i)
    {
        TEST_ASSERT_EQUAL(expected_negative_vector[i],output[i]);
    }
}
TEST(Sort,SelectionSortWorstCaseNegative){
    int output[SIZE];
    memcpy(output, worst_case_negative_vector, SIZE * sizeof(int));

    printv("in", output, SIZE);
    sort_array(output, SIZE, SELECTION);
    printv("out", output, SIZE);

    for (int i = 0; i < SIZE; ++i)
    {
        TEST_ASSERT_EQUAL(expected_negative_vector[i],output[i]);
    }
}
TEST(Sort,SelectionSortEqualCaseNegative){
    int output[SIZE];
    memcpy(output, equal_case_negative_vector, SIZE * sizeof(int));

    printv("in", output, SIZE);
    sort_array(output, SIZE, SELECTION);
    printv("out", output, SIZE);

    for (int i = 0; i < SIZE; ++i)
    {
        TEST_ASSERT_EQUAL(expected_equal_negative_vector[i],output[i]);
    }
}

// Testa elemento a elemento ordenado entre um vetor de entrada e um vetor de saida
// TEST(Sort, TestSort1)
// {
//     int i, n;
//     int vector_size = 10;
//     int in_vector[vector_size]; // Vetor de entrada
//     int out_vector[vector_size]; // Vetor de saida

//     // Inicialização com pior caso, ordem decrescente
//     for (i=0 ; i<vector_size; i++){
//         in_vector[i] = vector_size-i;
//         out_vector[i] = vector_size-i;
//     }

//     // Print dos valores de entrada
//     printf("\n\tInput vector:");
//     for(n=0;n<vector_size;n++) {
//        printf("%d ", in_vector[n]);
//     }
//     printf("\n");

//     sort_array(out_vector, vector_size, QUICK);

//     // Print dos valores ordenados
//     printf("\n\tSorted vector:");
//     for(n=0;n<vector_size;n++) {
//        printf("%d ", out_vector[n]);
//     }
//     printf("\n");

//     // All of these should pass
//     //for(n=0;n<vector_size;n++) {
//     //    TEST_ASSERT_EQUAL(in_vector[n], out_vector[vector_size-n-1]);
//     //}  
// }
