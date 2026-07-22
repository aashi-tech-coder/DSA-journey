#include <stdio.h>

int main()
{
    int arr[] = {3,2,6,5};
    int n = 4;
    int i , j , temp;
    for(int i = 0; i < n-1; i++){
        for (int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
                
        }
    }
    printf("sort array :");
    for (int i= 0; i < n; i++){
        printf("%d", arr[i]);
    }
    
    
    return 0;
}
