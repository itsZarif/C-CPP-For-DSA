#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int low = 0;
    int high = n;

    int answer = -1;

    while(low<=high)
    {
        int mid = (low+high)/2;

        if(mid*mid == n)
        {
            answer = mid;
            break;
        }
        else if(mid*mid>n)
        {
            high = mid - 1;
        }
        else
            low = mid + 1;
    }

    printf("%d\n", answer);
    return 0;
}
