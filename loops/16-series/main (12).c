//S=1+(1+2/1*2)+(1+2+3/1*2*3)....n

#include<stdio.h>
#include<stdlib.h>

int main(){
int i, n;
float s=0,t=0;
printf("Enter  numebr of terms:");
scanf("%d", &n);

for(i=1;i<=n;i=i+1){

    s=s+(float)(i/i*i);
    t=t+(float)s;
 printf("%f\n", t);}

 return 0;
}
