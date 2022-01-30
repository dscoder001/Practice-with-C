#include<stdio.h>
#include<stdlib.h>

int main(){

int i, n, d, s, copy;
printf("Enter a number:");
scanf("%d", &n);
copy = n;
d=n*n;
while(d!=0){
    i=d%10;
    s=s+i;
    d=d/10;
}

if(s==copy)
    printf("%d is neon number",s);
else
printf("%d is not neon number",s);
return 0;
}
