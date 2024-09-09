#ifndef SORTS_H
#define SORTS_H

void selectionSort(int arr[], int size, int& num_cmp, int& num_swaps);
void insertionSort(int arr[], int size, int& num_cmp, int& num_swaps);
void mergeSort(int arr[], int low, int high, int& num_cmp, int& num_swaps);

#endif