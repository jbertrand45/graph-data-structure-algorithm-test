#include "sorts.h"

void selectionSort(int arr[], int size, int& num_cmp, int& num_swaps)
{
    for(int = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for(int j = i + 1; j < size; j++)
        {
            num_cmp++;
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        if(minIndex != i)
        {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
            num_swaps++;
        }

    }
}

void insertionSort(int arr[], int size, int& num_cmp, int& num_swaps)
{
    for(int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j>= 0 && arr[j] > key)
        {
            num_cmp++;
            arr[j + 1] = arr[j];
            j = j - 1;
            num_swaps++;
        }
        arr[j + 1] = key;
        num_swaps++
    }
}

void merge(int arr[], int low, int mid, int high, int& num_cmp, int& num_swaps)
{
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int left[n1], right[n2];

    for (int i = 0; i < n1; i++)
    {
        left[i] = arr[low + 1];
    }
    for (int j = 0; j < n2; j++)
    {
        right[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = low;

    while (i < n1 && j < n2)
    {
        num_cmp++;

        if (left[i] <= right[j])
        {
            arr[k] = left[k];
            i++;
        }
        
        else
        {
            arr[k] = right[j];
            j++
        }

        k++;
        num_swaps++;
    }

    while(i < n1)
    {
        arr[k] = left[i];
        i++;
        k++;
        num_swaps++;
    }

    while (j < n2)
    {
        arr[k] = right[j];
        j++;
        k++;
        num_swaps++;

    }
}

void mergeSort(int arr[], int low, int high, int& num_cmp, int& num_swaps)
{
    if (low < high)
    {
        int mid = low + (high - low) / 2;
        mergeSort(arr, low, mid, num_cmp, num_swaps);
        mergeSort(arr, mid + 1, high, num_cmp, num_swaps);
        merge(arr, low, mid, high, num_cmp, num_swaps);
    }
}

