#include<stdio.h>
#include<stdlib.h>
int linearSearch(int arr[], int n, int ele){
    int i;
    for(i = 0; i < n; i++){
        if(arr[i] == ele){
            return i;
            i = n + 2;
        }
    }
    if(i != n + 2){
        return -1;
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
    a = linearSearch(arr, n, ele);
    if(a == -1){
        printf("\nThe elment %d is nowhere to be found in the given array", ele);
    }
    else{
        printf("\nThe element %d is found at index %d in the given array", ele, a);
    }
    return 0;
}
