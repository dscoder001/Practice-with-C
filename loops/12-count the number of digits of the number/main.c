#include<stdio.h>
#include<stdlib.h>

int main(){
  int n,d,s=0;
  printf("Enter a number:");
  scanf("%d", &n);

  for(;n!=0;){
    d = n%10;
     s++;
    n= n/10;
  }

    printf("the sum is %d",s);

    return 0;
}
