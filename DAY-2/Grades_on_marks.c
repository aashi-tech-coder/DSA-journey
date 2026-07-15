#include <stdio.h>
int main(){
    float n;
    printf("Enter yur marks :");
    scanf("%f" , &n);
    if ( n >= 90 ){
        printf(" Grade is A");
    }
    else if ( n >= 80 ){
        printf("Grade is B");
    }
    else if ( n >= 70 ){
        printf(" Grade is C");
    }
    else if ( n >= 60 ){
        printf("Grade is D");
    }
    else {
        printf("You are fail ");
    }
    return 0;
}
