#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct image{
    int n;
    char im[20];
}img[30];


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
    char c;
    int i = 0,j=0;
    while(1){
        j =0;
        c = '0';
        while((c = getchar()) != ' '){
           // c = getchar();
            if(c == EOF)
            break;

            img[i].im[j] = c;
            j++;
            
        }

         char *p;
        p = img[i].im;
        img[i].n = atoi(p+3);
       // printf("%s",img[i].im);
        i++;
        if(c == EOF)
            break;
         
         
    }
  
   bubbleSort(img, i);
    int k;
    for(k=0;k<i;k++){
        if(k!=0)
         printf(", ");
        
        printf("%s",img[k].im);
        
    }
    return 0;
}
