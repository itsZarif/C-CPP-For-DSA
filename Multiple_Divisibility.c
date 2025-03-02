#include <stdio.h>

int main() {
    int num;
    
    printf("Enter the number: ");
    scanf("%d", &num);
    
    if (num % 2 == 0)
        printf("%d is divisible by 2.\n", num);
    
    if (num % 3 == 0)
        printf("%d is divisible by 3.\n", num);
    
    if (num % 5 == 0)
        printf("%d is divisible by 5.\n", num);
    
    if (num % 2 != 0 && num % 3 != 0 && num % 5 != 0)
        printf("%d is not divisible by 2, 3, or 5.\n", num);

    return 0;
}
