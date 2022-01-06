#include<stdio.h>
#include<stdlib.h>

int main(){
  int n,i,s=0;
  printf("Enter a number:");
  scanf("%d", &n);

  for(i=1;i<n;i++){
    if(n%i==0)
    if(s=s+i);
    }
    if(s==n)
    printf("perfect number");
    else
    printf("not perfect number");

    return 0;
}
