#include <stdio.h>

int main()
{
    int arr[] = {3,2,6,5};
    int n = 4;
    int i , j ,mid_idx;
  //condition for sorting
    for(int i = 0; i < n-1; i++){
        mid_idx = i;
        for (int j = i+1; j < n; j++){
            if(arr[j] < arr[mid_idx]){
                mid_idx = j;
                
            }
                
        }
      //swaping the array
        int temp = arr[i];
        arr[i] = arr[mid_idx];
        arr[mid_idx] = temp;
    }
  //printing the result
    printf("sort array :");
    for (int i= 0; i < n; i++){
        printf("%d", arr[i]);
    }
    
    
    return 0;
}
