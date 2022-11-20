#include <stdio.h>  
  
void selection(int arr[], int n)  
{  
    int i, j, s;  
      
    for (i = 0; i < n-1; i++)     
    {  
        s= i; 
          
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[s])  
            s = j;  
 
    int temp = arr[s];  
    arr[s] = arr[i];  
    arr[i] = temp;  
    }  
}  
  
void print(int a[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        printf("%d ", a[i]);  
}  
  
int main()  
{  
    int a[] = { 12, 31, 25, 8, 32, 17,2 };  
    int n = sizeof(a) / sizeof(a[0]);  
    printf("Before sorting array elements are - \n");  
    print(a, n);  
    selection(a, n);  
    printf("\nAfter sorting array elements are - \n");    
    print(a, n);  
    return 0;  
}    



