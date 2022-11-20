#include<stdio.h>    
void print(int a[], int n)  
    {  
    int i;  
    for(i = 0; i < n; i++)    
    {    
        printf("%d ",a[i]);    
    }        
    }  
 void bubble(int a[], int n)   
 {  
   int i, j, t;  
   for(i = 0; i < n; i++)    
    {    
      for(j = i+1; j < n; j++)    
        {    
            if(a[j] < a[i])    
            {    
                t = a[i];    
                a[i] = a[j];    
                a[j] = t;     
            }     
        }     
    }     
 }     
  
 main ()    
{    
    int i, j,temp;     
    int a[] = { 10, 35, 32, 13, 26,99,16};     
    int n = sizeof(a)/sizeof(a[0]);   
    printf("Before sorting array elements are - \n");  
    print(a, n);  
    bubble(a, n);  
    printf("\nAfter sorting array elements are - \n");    
    print(a, n);  
}

