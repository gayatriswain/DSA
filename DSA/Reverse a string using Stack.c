#include <stdio.h>  
#include <string.h>  
#define m 100    
int top,stack[m];  
  
void push(char x){  
  
        
      if(top == m-1){  
          printf("stack overflow");  
      }  else {  
          stack[++top]=x;  
      }  
  
}  
  
void pop(){  
      
      printf("%c",stack[top--]);  
}  
  
  
main()  
{  
   char str[]="gayatri";  
   int len = strlen(str);  
   int i;  
  
   for(i=0;i<len;i++)  
        push(str[i]);  
  
   for(i=0;i<len;i++)  
      pop();  
} 
