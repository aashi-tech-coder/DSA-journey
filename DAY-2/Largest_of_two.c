#include <stdio.h>

int main() {
    int a ,b;
    printf("Enter your first num:");
    scanf("%d" , &a);
    printf("Enter your second num:");
    scanf("%d" , &b);
    
    if ( a > b){
        printf("a is greater then b");
    }
    else if( a == b){
        printf("both are equal");
    }
    else {
        printf("b is greater then a");
    }
    
    return 0;
}
