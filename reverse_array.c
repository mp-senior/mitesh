//12-12-2023
//task-2 = reverse_array
#include <stdio.h> 
 
void arrayrev(int arr[]) 
{ 
    int temp; 
    for (int i = 0; i < 7 / 2; i++) 
    { 
 
        temp = arr[i]; 
        arr[i] = arr[6 - i]; 
        arr[6 - i] = temp; 
    } 
} 
 
int main() 
{ 
    int arr[] = {1, 2, 3, 4, 5, 6, 67}; 
 
    printf("\n befor resvering the array\n "); 
 
    for (int i = 0; i < 7; i++) 
    { 
        printf("the value of element %d is %d\n", i, arr[i]); 
    } 
  
    arrayrev(arr); 
 
    printf("\n after resvering the array\n "); 
    for (int i = 0; i < 7; i++) 
    { 
        printf("the value of element %d is %d\n", i, arr[i]); 
    } 
    return 0; 
}
