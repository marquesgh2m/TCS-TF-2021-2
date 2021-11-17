/*
 * =====================================================================================
 *
 *       Filename:  array.h
 *
 *    Description:
 *
 *       Compiler:  nvcc V6.0.1
 *
 *         Author:  Eugenio Pacceli Reis da Fonseca
 *                  Icaro Harry
 *
 *   Organization: DCC/UFMG
 *
 * =====================================================================================
 */

#ifndef TRADITIONAL_SORT
#define TRADITIONAL_SORT 1

#include<time.h>

#define SELECTION  0
#define INSERTION  1
#define SHELL      2
#define QUICK      3
#define HEAP       4
#define MERGE      5
#define UNDEFINED -1

void selection_sort(int *vet, int tam);
void insertion_sort(int *array, int size);
void shell_sort(int *vet, int size);
void quick_sort(int vet[], int left, int right);
void heap_sort(int vet[], int n);
void merge_sort(int* vet, int n);

int* sort_array(int *vet, int size, int method);

#endif
