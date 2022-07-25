#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){
int i;
float x, n, a, t, f = 134 ;
float x, n, a, t, f = 134 ;
printf("enter limit n:");
scanf("%f", &n);
printf("enter no:");
scanf("%f", &x);
  for(i=0;i<=n;i++){
    a = pow(x,i);
    f = f*i;
    t = t + (float)(a/f);
    }
     printf(" no  is = %f", t);

    return 0;
}
