#include <stdio.h>
#include <math.h>

int main() {
  int a,b,c,d;
  float x1,x2;
 printf("enter coeff of x^2:");
  scanf("%d",&a);
  printf("enter coeff of x:");
  scanf("%d",&b);
  printf("enter value of const:");
  scanf("%d",&c);
  d=(b*b)-(4*a*c);
  if (a==0){
    printf("only one root:\n");
    x1=-c/b;
    printf("%f",x1);
    }
  else if (d==0){
    printf("both roots are equal:\n");
    x1=-b/(2*a);
    x2=x1;
    printf("%f",x1);
  }
  else if (d>0){
    printf("both roots are real and different\n");
    x1=(-b+sqrt(d))/2*a; 
    x2=(-b-sqrt(d)/2*a);
    printf("%f\n",x1);
    printf("%f",x2);
  }
  else {
    printf("the roots are imaginary");
  }
  return 0;
}