#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// struct xxx{
//     char x[8];
// }xx[30];
 int num[20];

int main() {
    
   
   
      char c;
    int i = 0,j=0;
    while(1){
        char x[30][8];
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
  






//    char c;
   
//     int i = 0,j=0;
//     while(1){
//         j =0;
//         c = '0';
        
//         while((c = getchar()) != ' '){
//            // c = getchar();
//             if(c == EOF)
//             break;
//             x[i][j] = c;
//             j++;
//             // printf("%c",c);  
//         }
         
//          if(c == EOF)
//             break;
//         x[i][j] = '\0';
//         n[i] = atoi(x[i]);
//         i++;
       
         
         
//     }

    for(j=0;j<i;j++){
       // printf("%d ",atoi(xx[j].x));
        
    }
   
    for(j=0;j<i;j++){
            
            printf("%d  ",num[j]);  
    }
    
    
     
    return 0;
}
