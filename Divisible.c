#include <stdio.h>

int main()
{
    int a;
    
    printf("Enter a number");
    scanf("%d", &a);
    if(a%2==0 && a%5==0 && a%7==0)
    { 
        printf("number is Divisible by 2,5 and 7");
    }
    else if(a%2==0 && a%5==0)
    {
         printf("number is Divisible by 2 and 5");
    }
    else
    {
        printf("number is not Divisible by any of them");
    }

    return 0;
}
