//Keep taking numbers as input from user until user enters odd number
#include<stdio.h>
int main()
{
    int i,n;
    // for ( i = 0; ; i++)
    // {   
    //     if (n%2!=0)
    //     {
    //         break;
    //     }
    //     printf("Enter number: ");
    //     scanf("%d", &n);
    // }
    do
    {
        printf("Enter number: ");
        scanf("%d", &n);
               
        if (n % 2 != 0)
        {
            break;
        }
        
    } while (1);
    
    printf("End");
    return 0;
}