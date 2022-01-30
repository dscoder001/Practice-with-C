//s=1/2 + 3/4 + 5/6....... n
#include<stdio.h>
#include<stdlib.h>

int main(){
int i, n;
float s=0;
printf("Enter a numebr:");
scanf("%d",&n);
for(i=1;i<=n;i++){
   if(i%2!=0)
    s=s+(float)i/i+1;}
 printf("%f", s);

 return 0;
}
