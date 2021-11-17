# Sort Test Routines

Test results:  
[![CircleCI](https://circleci.com/gh/marquesgh2m/TCS-TF-2021-2/tree/main.svg?style=svg)](https://circleci.com/gh/marquesgh2m/TCS-TF-2021-2/tree/main)  
[![CircleCI](https://circleci.com/gh/marquesgh2m/TCS-TF-2021-2/tree/main.svg?style=shield)](https://circleci.com/gh/marquesgh2m/TCS-TF-2021-2/tree/main)  

Important files:

* [Makefile Unity](Unity/examples/sort/makefile)
* [.circleci/config.yml](.circleci/config.yml)
* [TestSort_Runner.c](Unity/examples/sort/test/test_runners/TestSort_Runner.c)
* [TestSort.c](Unity/examples/sort/test/TestSort.c)
* [sort.c](Unity/examples/sort/src/sort.c)




# Sort Algorithms


Obs.: **Modified to remove CUDA code.**


Repository of sorting algorithms in C.

## Information
> Our program generates and fills arrays in four different ways: 
  > 
  1. arrays with totally random elements
  2. arrays already ordered 
  3. arrays ordered in descending order 
  4. arrays 90% ordered.
	
> Sorting methods implemented
  >
  1. Selection sort
  2. Insertion sort
  3. Shell sort
  4. Quick sort
  5. Heap sort
  6. Merge sort  

## Compiling

Run the MAKEFILE

## Instructions

To run the program, type:

```c
./app -a $algorithm -n $number_of_elements -s $state [-P]
```
### Parameters

> 1. -a sorting algorithm 
2. -n number of elements
3. -s array state
4. -P print results

| Param         | Value         | 
| ------------- |:-------------:| 
| -a            | selection     |
|               |   insertion   |
|               |     shell     | 
|               | quick         | 
|               | heap          | 
|               | merge         | 
| -n            | int > 0       |
| -s            | random        |
|               | ascending     |
|               | descending    | 
|               | almost        | 
| -P            |


# Test Authors
------
[**Alexandre Hampel**](https://br.linkedin.com/)  
[**Guilherme Marques**](https://br.linkedin.com/)  
[**Rafael Garibotti**](https://br.linkedin.com/in/rafaelgaribotti) 
