#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE*fptr;
    FILE*fptrr;
    fptr=fopen("T1.txt","r");
    fptrr=fopen("T2.txt","r");
    if(fptr==NULL)
	    printf("No file");
    else
	    printf("File opened");
    
    
    fclose(fptr);
    fclose(fptrr);
    return 0;    
}