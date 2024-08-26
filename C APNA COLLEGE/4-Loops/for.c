#include<stdio.h>
int main()
{
    /*increment operator
    (post-increment operator)i++ --> first use i, then increase the value
    (pre-increment operator)++i --> First  increase then use
    
    (pre-decrement operator) --i
    (post-decrement operator) i--
    */

    int i;
    for (i = 0; i <= 10; i++)               
    {
        printf("%d \n",i);
    }
    return 0;
}