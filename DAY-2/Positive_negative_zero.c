#include <stdio.h>

int main() {
    int i;
    printf("Enter your number:");
    scanf("%d" ,&i);
    
    if( i > 0){
        printf("Its an positive number");
    }
    else if ( i < 0){
        printf("Its an negative number");
    }
    else{
        printf("zero");
    }
    
    return 0;
}
