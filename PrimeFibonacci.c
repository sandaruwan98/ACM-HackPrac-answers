#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int num[200];

void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
// A function to implement bubble sort 
void bubbleSort(int arr[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)       
  
       // Last i elements are already in place    
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              swap(&arr[j], &arr[j+1]); 
} 









int isPerfectSquare(int x) 
{ 
    int s = sqrt(x); 
    return (s*s == x); 
} 
  
// Returns true if n is a Fibinacci Number, else false 
int isFibonacci(int n) 
{ 
    // n is Fibinacci if one of 5*n*n + 4 or 5*n*n - 4 or both 
    // is a perferct square 
    return isPerfectSquare(5*n*n + 4) || 
           isPerfectSquare(5*n*n - 4); 
}


int isPrime(int n) 
{ 
    if (n <= 1) 
        return 0; 
    int i;
  for ( i = 2; i < n; i++) 
        if (n % i == 0) 
            return 0; 
  
    
    return 1;
} 



int main() {
    
    
    
      char c;
    int i = 0,j=0;
    while(1){
        char x[200][8];
        j =0;
        c = '0';
        while((c = getchar()) != ' '){
            if(c == EOF)
            break;

            x[i][j] = c;
            j++;
            
        }
       num[i] = atoi(x[i]);
        i++;
        if(c == EOF)
            break;
         
         
    }
  

    bubbleSort(num,i);
   
    int k;
    for(k=0;k<i;k++){
        int x =1;
        if(k!=0 && (num[k] - num[k-1])==0)
            x = 0;
        if(isPrime(num[k]) && isFibonacci(num[k]) && x)
            printf("%d ",num[0]);
            
            
            
    }
    
    
     
    return 0;
}
