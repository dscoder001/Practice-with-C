//1 2 3 4
//1 2 3
//1 2
//1
#include<stdio.h>
#include<stdlib.h>

int main(){
int i, j,c;
for(i=4;i>=1;i--){
        c=1;
for(j=1;j<=i;j++){
    printf("%d",c);
    c=c+1;
}printf("\n");

}


return 0;
}
