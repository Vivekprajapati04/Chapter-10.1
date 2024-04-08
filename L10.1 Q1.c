#include<stdio.h>

  cube(int n){
    return n*n*n;
}
int main(){
    int n;
    printf("Enter Number=");
    scanf("%d",&n);
    
    printf("%d",cube(n));
    
    
}

