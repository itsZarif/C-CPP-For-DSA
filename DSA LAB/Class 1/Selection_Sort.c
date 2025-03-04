#include <stdio.h>
int min_index(int arr[], int n, int start) //user defined function for value checking
{
    int min_num = arr[start];
    int min_index = start;
    for(int i = start+1;i < n; i++)
    {
        if(arr[i] < min_num)
        {
            min_num = arr[i];
            min_index = i;
        }
    }
    return min_index;
}
void selection_sort(int arr[], int n) //user defined function for swap
{
    for(int i = 0; i <= n-2; i++)
    {
        int min_indx = min_index(arr, n, i);
        int temp = arr[i];
        arr[i] = arr[min_indx];
        arr[min_indx] = temp;
    }
}
#include <stdio.h>
int main()
{
    int arr[] = {5, 7, 2, 9, 8, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Array before sorting: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    selection_sort(arr, n);
    printf("\nArray after sorting assendrcally: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nArray after sorting dessendrically: ");
    for(int i = n-1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
//visualgo.net version: https://visualgo.net/en/sorting?mode=bubble&code=function%20bubbleSort(arr)%20%7B%0A%20%