#include<stdio.h>
#include<string.h>

int input_number_of_nos()
{   
    int n;
    printf("Enter the total numbers you want to add: ");
    scanf("%d", &n);
    return n;
}

int input_n_numbers(int n, int a[n])
{   
    char ordinal[3];
    for(int i=0; i<n; i++)
    {
        if((i+1)%10==1)
            strcpy(ordinal, "st");      
        else if((i+1)%10==2)
            strcpy(ordinal, "nd");
        else if((i+1)%10==3)
            strcpy(ordinal, "rd");
        else
            strcpy(ordinal, "th");

        printf("Enter the %d%s number: ", i+1, ordinal);
        scanf("%d", &a[i]);
    }
    
}

int sum_of_n_numbers(int n, int a[n])
{
    int sum=0;
    for(int j=0; j<n; j++)
    {
        sum+=a[j];
    }
    return sum;
}

void output_sum(int n, int sum)
{
    printf("Sum of entered %d numbers is %d.\n", n, sum);
}

int main()
{
    int n=input_number_of_nos();
    int a[n];
    input_n_numbers(n, a);
    int sum=sum_of_n_numbers(n, a);
    output_sum(n, sum);
    return 0;
}
