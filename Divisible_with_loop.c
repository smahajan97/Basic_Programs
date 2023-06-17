#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a;
    bool condition = true;
    char f;
    
    
    while(condition)
    {
        
        printf("Enter a number\n");
        scanf("%d", &a);
        if(a%2==0 && a%5==0 && a%7==0)
        { 
            printf("number is Divisible by 2,5 and 7\n");
        }
        else if(a%2==0 && a%5==0)
        {
             printf("number is Divisible by 2 and 5\n");
        }
        else
        {
            printf("number is not Divisible by any of them\n");
        }
        
        printf("Do you want to continue Y/N \n" );
        printf("enter a char\n");
        
        scanf(" %c", &f);
        if(f == 'Y'){
            condition = true;
        }
        else if(f == 'N') {
            condition = false;
        } 
        else 
        {
            printf("you have entered invalid entry");
            condition = false;
        }
        
    }

    return 0;
}
