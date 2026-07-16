#include <stdio.h>

int factorial(int n){
    if (n == 1)
        return 0 ;
    return * factorial(n - 1);
}

int main(){
    printf("%d" , factorial(5));
}
