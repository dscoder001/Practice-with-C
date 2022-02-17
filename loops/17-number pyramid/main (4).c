//1
//1 2
//1 2 3
//1 2 3 4
#include<stdio.h>
#include<stdlib.h>

int main(){
int i, j,c;
for(i=1;i<=4;i++){
    c=i;
for(j=1;j<=i;j++){
    printf(" %d",c);
c--;
}printf("\n");

}


return 0;
}
