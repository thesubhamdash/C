#include<stdio.h>
#include<conio.h>
void main()
{
  printf("Lets learn about pointer\n");
  int a=69;
  int* b=&a;
  int* a1=NULL;
  printf("The address of a is %p\n",&a);
  printf("The address of a is %p\n",b);
  printf("The address of b is %p\n",&b);
  printf("The value of a is %d\n",*b);
  printf("The garbage value of a1 is %p",a1);
  getch();
}


