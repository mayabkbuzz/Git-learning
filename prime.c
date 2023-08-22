#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int count=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count=1;
            break;
        }
    }
    if(count==0)
    {
        printf("Yes I am a prime number, Mayank Baby");
    }
    else{
        printf("No I am not a prime number, Mayank Baby Sorry, ummmah");
    }

    return 0;
}