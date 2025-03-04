#include<stdio.h>
struct Customer
{
    char customer_name[50];
    char customer_phone_number[15];
    int membership_id;
    int total_points;
};
typedef struct Customer Customer;


void bubble_sort(Customer customers[], int n)
{
    for(int i=n-1; i>=1; i--)
    {
        for(int j=0; j<i; j++)
        {
            if(customers[j].total_points<customers[j+1].total_points)
            {
                Customer temp = customers[j];
                customers[j] = customers[j+1];
                customers[j+1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    printf("Enter the number of customers: ");
    scanf("%d", &n);
    getchar();
    Customer customers[n];

    for(int i=0; i<n; i++)
    {
        printf("Enter the name of customer %d: ", i+1);
        gets(customers[i].customer_name);
        printf("Enter the phone number of customer %d: ", i+1);
        gets(customers[i].customer_phone_number);
        printf("Enter the membership id and total points of customer %d: ", i+1);
        scanf("%d%d", &customers[i].membership_id, &customers[i].total_points);
        getchar();
    }

    int k;
    printf("Enter the value of K: ");
    scanf("%d", &k);

    bubble_sort(customers, n);

    printf("The %d th most valuable customer: %s %d\n", k, customers[k-1].customer_name, customers[k-1].total_points);




    return 0;
}
