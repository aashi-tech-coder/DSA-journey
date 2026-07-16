#include <stdio.h>

void add (int x , int y ) {
    int sum = x + y;
    printf("The sum is %d ", sum);
}
int main(){
    int x ,y;
    printf("Enter ypur first value :");
    scanf("%d" , &x);
    printf("Enter your second value :");
    scanf("%d" , &y);
    add( x , y);
    return 0;
}

    
