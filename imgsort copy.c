#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct image{
    int n;
    char im[200];
}img[5];


void swap(struct image *xp, struct image *yp) 
{ 
    struct image temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
// A function to implement bubble sort 
void bubbleSort(struct image arr[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)       
  
       // Last i elements are already in place    
       for (j = 0; j < n-i-1; j++)  
           if (arr[j].n > arr[j+1].n) 
              swap(&arr[j], &arr[j+1]); 
} 





int main() {
    
    int i;
    for(i=0;i<5;i++){
        scanf("%s",&(img[i].im));
        char *p;
        p = img[i].im;
        img[i].n = atoi(p+3);
         
    }
   bubbleSort(img, 5);
    
    for(i=0;i<5;i++){
        if(i!=0)
        {
            
             if(img[i].n == img[i-1].n)
                 continue;
             printf(", ");
        }
        printf("%s",img[i].im);
        
    }
    return 0;
}
