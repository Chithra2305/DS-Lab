#include <stdio.h>
#include <stdlib.h>
int i_default = 0;
#define linearSearch(a, b, c) linearSearch_recur(a, b, c);
#define linearSearch(a, b) linearSearch_recur(a, b, i_default);
int linearSearch_recur(int arr[], int ele, int i){
    if(arr[i] == ele){
        return i;
    }
    else{
        return linearSearch_recur(arr, ele, i+1);
    }
}
int main(){
    int n, ele, a;
    printf("Enter the size of the array(recursion): ");
    scanf("%d", &n);
    printf("\nEnter the elements of the array: \n");
    int *arr = (int*)malloc(n*(sizeof(int)));
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the element to be searched: ");
    scanf("%d", &ele);
    a = linearSearch(arr, ele);
    if(a == -1){
        printf("\nThe elment %d is nowhere to be found in the given array", ele);
    }
    else{
        printf("\nThe element %d is found at index %d in the given array", ele, a);
    }
    return 0;
}


/*
Ouput:
Enter the size of the array: 3

Enter the elements of the array:
1
34
2

Enter the element to be searched: 34

The element 34 is found at index 1 in the given array

Enter the size of the array: 4

Enter the elements of the array: 
1
2
3
4

Enter the element to be searched: 2

The element 2 is found at index 1 in the given array

*/
