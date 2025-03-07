// Online C compiler to run C program online
#include <stdio.h>

// Function to swap two elements
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function using the first element as the pivot
int partition(int arr[], int start, int end)
{
    int pivot = arr[start]; // First element as pivot
    int i = start + 1;
    int j = end;

    while (i <= j)
    {
        while (i <= j && arr[i] <= pivot)
            i++;
        while (i <= j && arr[j] > pivot)
            j--;
        if (i < j)
        {
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[start], &arr[j]);
    return j;
}

// Quick Sort function
void quickSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int pivotIndex = partition(arr, start, end);
        quickSort(arr, start, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, end);
    }
}

// Function to print the array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    printf("How many Do you wanna insert:\n");
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter Element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("-----------------------\n");
    printf("Original array: \n");
    printArray(arr, n);

    quickSort(arr, 0, n - 1); // sorting from frist to last element

    printf("-----------------------\n");
    printf("Sorted array: \n");
    printArray(arr, n);
    printf("-----------------------\n");
    return 0;
}