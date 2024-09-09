#include <iostream>
#include <ctime>
#include <cstdlib>
#include "sorts.cpp"

using namespace std;

void generateRandomArray(int arr[], int size);
void printArray(int arr[], int size);
void selectionSort(int arr[], int size, int& num_cmp, int& num_swaps);
void insertionSort(int arr[], int size, int& num_cmp, int & num_swaps);
void mergeSort(int arr[], int low, int high, int& num_cmp, int& num_swaps);
void merge(int arr[], int low, int mid, int high, int& num_cmp, int& num_swaps);

int main()
{
    const int sizes[] = {1000, 10000, 100000};
    const int num_sizes = 3;
    const int max_val = 1000000;
    const int num_reps = 10;
    int arr[num_sizes][max_val];
    int num_cmp, num_swaps;
    clock_t start, end;

    for (int i = 0; i < num_sizes; i++)
    {
        generateRandomArray(arr[i], sizes[i]);
    }
        cout << " selection sort: " << endl;
        for (int i = 0; i < num_sizes; i++)
        {
            num_cmp = 0;
            num_swaps = 0;

            cout << " Size of Array: " << sizes[i] << endl;
            for (int j = 0; j < num_reps; j++)
            {
                start = clock();
                selectionSort(arr[i], sizes[i], num_cmp, num_swaps);
                end = clock();
            }

            cout << " CPU time : " << (double)(end - start) / CLOCKS_PER_SEC / num_reps << " seconds " << endl;
            cout << " Comparison Numbers : " << num_cmp / num_reps << endl;
            cout << " Swapped Numbers : " << num_swaps / num_reps << endl << endl;
        }

        cout << " insertion sort : " << endl;
        for (int i = 0; i < num_sizes; i++)
        {
            num_cmp = 0;
            num_swaps = 0;

            cout << "Size of Array : " << sizes[i] << endl;
            for (int j = 0; j < num_reps; j++)
            {
                start = clock();
                insertionSort(arr[i], sizes[i], num_cmp, num_swaps);
                end = clock();
            }

            cout << " CPU time : " << (double)(end - start) / CLOCKS_PER_SEC / num_reps << " seconds " << endl;
            cout << " Comparison Numbers : " << num_cmp / num_reps << endl;
            cout << " Swapped Numbers : " << num_swaps / num_reps << endl << endl;
        }

        cout << " Merge sort : " << endl;
        for(int i = 0; i < num_sizes; i++)
        {
            num_cmp = 0;
            num_swaps = 0;

            cout << " Size of Array : " << sizes[i] << endl;
            for(int j = 0; j < num_reps; j++)
            {
                start = clock();
                mergeSort(arr[i], 0, sizes[i] - 1, num_cmp, num_swaps);
                end = clock();
            }

            cout << " CPU time ; " << (double)(end - start) / CLOCKS_PER_SEC / num_reps << " seconds " << endl;
            cout << " Comparison Numbers : " << num_cmp / num_reps << endl;
            cout << " Swapped Numbers : " << num_swaps / num_reps << endl << endl;
        }
        
        return 0;
    }





