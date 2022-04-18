/*9 7 5 3 1
 7 5 3 1
 5 3 1
 3 1*/
#include<stdio.h>
#include<stdlib.h>

int main(){
int i, j,c,d=9;
for(i=5;i>=1;i--){
        c=d;
for(j=1;j<=i;j++){
    printf(" %d",c);
    c=c-2;
}
    d=d-2

printf("\n");

}


return 0;
}
