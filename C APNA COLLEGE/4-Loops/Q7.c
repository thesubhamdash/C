// Print all the odd numbers from 5 to 50
#include<stdio.h>
int main()
{
    int i;
    for(i=5; i<=50; i++)
    {
        if(i % 2 == 0)
            continue;   //skip
        printf("%d\n", i);
    }
    printf("Done!");
    return 0;
}   