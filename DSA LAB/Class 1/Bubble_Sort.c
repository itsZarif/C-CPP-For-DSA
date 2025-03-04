void bubbleSort(int arr[], int n)
{
    for(int i = n-1;i >= 0; i--)
    {
        for(int j = 0; j < i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
#include <stdio.h>
int main()
{
    int arr[] = {5, 7, 2, 9, 8, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Sorted array before:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("\nSorted array after assendring:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("\nSorted array after dessendring:\n");
    for(int i = n-1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}