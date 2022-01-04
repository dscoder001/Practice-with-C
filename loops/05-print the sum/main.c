#include<stdio.h>
#include<stdlib.h>

int main(){
 int i,n;
 int s=0;
printf("Enter a number:");
scanf("%d", &n);
 for( i = 1; i <= n; i++){
if(s=s+i)
printf("%d\n", s);
}
return 0;
    }
