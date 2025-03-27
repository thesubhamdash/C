#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE*fptr;
    char text[1000];
    int num,sum=0,count=0;
    fptr=fopen("sample.txt","r");
    if (fptr==NULL)
    {
        printf("No File");
    }
    else
        printf("File Opened\n");
    while (!feof(fptr))
    {
        if (fscanf(fptr,"%d",&num)==1)
        {
            count++;
            sum+=num;
        }
    }
    printf("Total items %d and total sum %d\n", count, sum);
    fclose(fptr);
    return 0;
}