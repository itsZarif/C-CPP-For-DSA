#include <stdio.h>
struct Customer
{
    /* data */
    char customer_name[50];
    char customer_phone_number[15];
    int membership_id;
    int total_points;
};
typedef struct Customer Customer;

void bubbleSort(Customer customers[], int n)
{
    for(int i = n-1; i >= 0; i--)
    {
        for(int j = 0; j < i; j++)
        {
            if(customers[j].total_points < customers[j+1].total_points)
            {
                // Swap customers[j] and customers[j+1]
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
    scanf("%d", &n);
    getchar(); // Consume newline character
    Customer customers[n];
    
    for(int i = 0; i < 5; i++)
    {
        printf("Enter %d Customers Name: ", i+1);
        gets(customers[i].customer_name);
        printf("Enter %d Customers Phpne Number: ", i+1);
        gets(customers[i].customer_phone_number);
        printf("Enter %d Customers Membership ID: ", i+1);
        scanf("%d%d", &customers[i].membership_id, &customers[i].total_points);
        getchar(); // Consume newline character
    }

    int k;
    printf("Enter the position of customer whose points to be displayed: ");
    scanf("%d", &k);

    bubbleSort(customers, n);
    printf("%s %d th most valuable customer", customers[k-1].customer_name, customers[k-1].total_points);
    
    return 0;
}