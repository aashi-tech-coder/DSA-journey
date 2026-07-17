#include <stdio.h>

int main()
{
    int n, i, arr[10];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Taking array input
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    // Assuming index 0 is both min and max
    int max = arr[0];
    int min = arr[0];

    // Comparing values
    for(i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }

        if(arr[i] < min){
            min = arr[i];
        }
    }

    printf("Min value is %d\n", min);
    printf("Max value is %d\n", max);

    return 0;
}
