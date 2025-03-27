#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE*fptr;
    char text[1000];
    fptr=fopen("sample.txt","r");	// for append mode-> "a"
    if(fptr==NULL)
	    printf("No file");
    else
	    printf("File opened");
    while (!feof(fptr))
    {
        fgets(text,1000,fptr);
    }
    
    fclose(fptr);
    return 0;
}