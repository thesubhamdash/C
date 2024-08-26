//program tp check if the student passed (marks>30 is pass) & (marks<=30 is fail)
#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks of the student: \n");
    scanf("%d", &marks);

    if (marks>30 && marks<=100){
        printf("pass \n");
    }
    else if (marks<=30 && marks>=0){
        printf("Fail \n");
    }
    else{
        printf("Invalid marks");
    }

    (marks >30 && marks <=100) ? printf("Pass"): printf("Fail");
    return 0;
}