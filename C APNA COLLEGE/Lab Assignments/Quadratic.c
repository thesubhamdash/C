#include <stdio.h>
#include<math.h>

int main() {
        
    float a,b,c,d,r1,r2,r,i;
    printf("Enter coefficient of x^2, x and constant : \n");
    scanf("%f%f%f",&a,&b,&c);
    d=pow(b,2)-4*a*c;
    if(d==0) {
        r1=(-b)/(2*a);
        r2=r1;
        printf("Two roots are: %f and %f",r1,r2);
    }
    else if(d>0){
        r1=((-b)/(2*a)) + (pow(d,0.5))/(2*a);
        r2=((-b)/(2*a)) + (pow(d,0.5))/(2*a);
        printf("Two roots are: %f and %f",r1,r2);
    }
    else{
        r=((-b)/(2*a));
        i=(pow(-d,0.5))/(2*a);
        printf("Two roots are: %f+%fi and %f-%f", r,i,r,i);
    }   
    return 0;
}