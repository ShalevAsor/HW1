#include "myMath.h"
#define e 2.7182



double Exponent(int x){
if(x==0){
    return 1;
}
else{

double ans=1;

    while(x>0){
      ans*=e;
      x--;
    }
    return ans;}
}

double Power(double x,int y){
    if(y==0){
        return 1;
    }
    else{
        double ans=1;
        while(y>0){
            ans*=x;
            y--;
        }
        return ans;
    }
}
