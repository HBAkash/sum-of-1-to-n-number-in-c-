//Display the sum of 1 to n.
#include<stdio.h>
#include<conio.h>
int main()
{
    int digit,i,sum=0,n;
    printf("Enter the last digit: ");
    scanf("%d",&digit);
    for(i=0;i>=digit;i++)
    {
        sum=sum+i;
    }
    printf("sum is %d",sum);
    getch();
}
