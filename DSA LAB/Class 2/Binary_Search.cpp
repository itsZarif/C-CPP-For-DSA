#include <stdio.h>
int BinarySearch(int arr[], int arr_size, int finding) {
    int low = 0;
    int high = arr_size - 1;
    while(low <= high) {
        int mid = (low + high) / 2; //int mid = low + (high - low) / 2;
        if(arr[mid] == finding)
            return mid;
        if(arr[mid] < finding)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}


int main() {\
    int arr[] = {2, 3, 4, 10, 40};
    int size = 5;
    int key = 4;
    int result = BinarySearch(arr, size, key);
    if(result != -1)
    {
        printf("Element found at index %d", result);
    }
    else{
        printf("Element not found in array");
    }
    return 0;
}