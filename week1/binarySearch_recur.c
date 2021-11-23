#include <stdio.h>
#include <stdlib.h>
int low_default = 0;
#define binarySearch(a, b, c, d) binarySearch_recur(a, b, c, d);
#define binarySearch(a, b, c) binarySearch_recur(a, b, c, low_default);
int binarySearch_recur(int arr[], int ele, int high, int low){
    int mid = (low + high) / 2;
    if(arr[mid] == ele){
        return mid;
    }
    else if(low > high){
        return -1;
    }
    else if(ele > arr[mid]){
        return binarySearch_recur(arr, ele, high, mid + 1);
    }
    else if(ele < arr[mid]){
        return binarySearch_recur(arr, ele, mid - 1, low);
    }
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
    a = binarySearch(arr, ele, n-1);
    if(a != -1){
        printf("\nThe element %d is found at index %d in the given array", ele, a);
    }
    else{
        printf("\nThe elment %d is nowhere to be found in the given array", ele);
    }
    return 0;
}