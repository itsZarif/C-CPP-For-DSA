#include <stdio.h>
int main() {
    int input;
    printf("Enter a number: ");
    scanf("%d", &input);

    int lower = 0;
    int high = input;

    int answer = -1;  // Initialize result

    while (lower <= high) {
        int mid = (lower + high) / 2;
        
        // If mid * mid equals to input, then mid is the square root of input
        if(mid * mid == input) {
            printf("The square root of %d is %d\n", input, mid);
        
        }
        else if (mid * mid > input) {
            high = mid - 1;
        }
        else
        {
            lower = mid + 1;
        }
    return 0;
}