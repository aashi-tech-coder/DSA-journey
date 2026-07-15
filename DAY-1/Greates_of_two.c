#include <stdio.h>

int main() {
    // Write C code here
     int a ,b ;
    printf("enter your first no :");
    scanf("%d" , &a);
    printf("enter your second number:");
    scanf("%d" , &b);
    if ( a > b){
        printf("a is greater");
    }
    else if( a == b ){
        printf(" both ar equal");
    }
    else {
        printf("b is greater");
    }
   
    return 0;
}
