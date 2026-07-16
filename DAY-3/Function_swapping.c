#include <stdio.h>
void swap (int a , int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("A is = %d\n" , a);
    printf("B is = %d\n" , b);
}
int main (){
    int a ,b ;
    printf("Enter 1st value :");
    scanf("%d" , &a);
    printf("Enter 2nd value:");
    scanf("%d", &b);
    
    swap(a ,b);
    
    return 0;
}
