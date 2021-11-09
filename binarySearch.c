#include <stdio.h>
#include <stdlib.h>

int binarySearch(int arr[], int n, int ele){
    int low = 0, high = n - 1, mid;
    while(low <= high){
        mid = (low + high) / 2;
        if(ele > arr[mid])
            low = mid + 1;
        else if(ele < arr[mid])
            high = mid - 1;
        else
            return mid;
    }
    return -1;
}

int main(){
    int n, ele, a;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("\nEnter the elements of the array: \n");
    int *arr = (int*)malloc(n*(sizeof(int)));
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the element to be searched: ");
    scanf("%d", &ele);
    a = binarySearch(arr, n, ele);
    if(a == -1){
        printf("\nThe elment %d is nowhere to be found in the given array", ele);
    }
    else{
        printf("\nThe element %d is found at index %d in the given array", ele, a);
    }
    return 0;
}