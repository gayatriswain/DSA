#include <stdio.h>  
  
void insert(int a[], int n)  
{  
    int i, j, key;  
    for (i = 1; i < n; i++) {  
        key = a[i];  
        j = i - 1;  
  
        while(j>=0 && key <= a[j])    
        {    
            a[j+1] = a[j];     
            j = j-1;    
        }    
        a[j+1] = key;    
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
    int a[] = { 12, 31, 25, 8, 32, 17 };  
    int n = sizeof(a) / sizeof(a[0]);  
    printf("Before sorting array elements are - \n");  
    print(a, n);  
    insert(a, n);  
    printf("\nAfter sorting array elements are - \n");    
    print(a, n);  
  
    return 0;  
}    
