#include <stdio.h>
#include "power.c"
#include "basicMath.c"

int main(){
double x=1,sum1=0,sum2=0,sum3=0;
printf("please insert a real number:\n");
scanf("%lf",&x);
printf("x=%0.4lf\n",x);

//1
sum1=sub(add(Power(x,3),Exponent(x)),2);
printf("The function is:f(x)=e^x+x^3-2 the value at the point:%0.4lf is: %0.4lf\n",x,sum1);
//2
sum2=add(mul(x,3),mul(Power(x,2),2));
printf("The function is:f(x)=3x+2x^2 the value at the point:%0.4lf is: %0.4lf\n",x,sum2);
//3
sum3=sub(div(mul(Power(x,3),4),5),mul(x,2));
printf("The function is:f(x)=(4x^3)/5-2x: the value at the point:%0.4lf is: %0.4lf\n",x,sum3);

    return 0;
}