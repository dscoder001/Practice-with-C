//S= 1/2 + 2/3 + 3/4....n
#include<stdio.h>
#include<stdlib.h>

int main(){
int i, n;
float s=0;
printf("Enter a numebr:");
scanf("%d",&n);
for(i=1;i<=n;i++){
    s=s+(float)i/i+1;}
 printf("%f", s);

 return 0;
}
