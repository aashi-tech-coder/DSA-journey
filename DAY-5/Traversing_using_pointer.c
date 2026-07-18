#include <stdio.h>

int main() {
   int arr[3] ={10,20,30};
   int *p = arr;
   
   printf("Array traversing using pointers:\n");
   for (int i = 0; i<3; i++){
       printf("%d\n", *(p+i));
   }
       return 0;
}
