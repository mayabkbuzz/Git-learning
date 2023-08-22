/*
pallindrome number =
a number which on reverse is exactly the same 
example 12321, 101, 787
*/
#include<stdio.h>

int main()
{
    int num;
    printf("Maynak, Please enter a number for me : ");
    scanf("%d",&num);
    int new_num=0,rem;
    int temp_num=num;
    while(num>0)
    {
        rem=num%10;
        new_num=new_num*10+rem;
        num= num/10;
    }
    if(temp_num==new_num)
    {
        printf("Yes Baby, I am a pallindrome");
    }
    else
    {
        printf("No baby, I am not a pallindrome");
    }
    return 0;
}
