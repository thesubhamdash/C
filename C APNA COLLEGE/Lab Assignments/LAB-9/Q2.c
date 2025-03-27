#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE*fptr;
fptr=fopen("sample.txt","a");	// for append mode-> "a"
if(fptr==NULL)
	printf("No file");
else
	printf("File opened");

fprintf(fptr,"\nSubham Kumar Das");		// for writing in the file.
fclose(fptr);
return 0;
}