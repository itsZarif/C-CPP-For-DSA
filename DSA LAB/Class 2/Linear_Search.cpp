#include <stdio.h>
int linearSearch(int arr[], int arr_size, int finding) {
    for(int i = 0; i < arr_size; i++) {
        if(arr[i] == finding)
            return i;
    }
    return -1;
}

int main() {
    int key = 10;
    int arr[] = {2, 3, 4, 10, 40};
    int size = 5;
    int result = linearSearch(arr, size, key);
    if(result != -1)
    {
        printf("Element found at index %d", result);
    }
    else{
        printf("Element not found in array");
    }


    return 0;
}