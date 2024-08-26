#include<stdio.h>
int main()
{
    int i;
    char str='*';
    for (i=1; i<6; i++)
    {
        printf("%c", str);
        if(i==5)
        {
            for(int j=1; j<4; j++)
            {
                printf("\n");
                for(int k=1; k<6; k++)
                {
                    printf("%c", str);
                }
                
            }
        }
    }
}