#include<stdio.h>
int min_index(int arr[], int n, int start)
{
    int minimum = arr[start];
    int minimum_index = start;

    for(int i=start+1; i<n; i++)
    {
        if(arr[i]<minimum)
        {
            minimum = arr[i];
            minimum_index = i;
        }
    }
    return minimum_index;
}

void selection_sort(int arr[], int n)
{
    for(int i=0; i<=n-2; i++)
    {
        int min_idx = min_index(arr, n, i);

        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

void bubble_sort(int arr[], int n)
{
    for(int i=n-1; i>=1; i--)
    {
        for(int j=0; j<i; j++)
        {
            if(arr[j+1]<arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArray(const int arr[], int n)
{
    printf("\nThe elements of the array: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
}
int main()
{
    int n = 6;
    int arr[n] = {5, 7, 2, 9, 8, 3};
    printf("Before Applying Bubble Sort on Array!\n");
    printArray(arr, n);


    bubble_sort(arr, n);

    printf("After Applying Bubble Sort on Array!\n");
    printArray(arr, n);


    return 0;
}
