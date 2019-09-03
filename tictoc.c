#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int b[3][3];
    
    int i,j;
    for(i = 0;i<3;i++){
        for(j=0;j<3;j++){
         scanf("%d",&b[i][j]);   
        }
    }
    
    
    for(i = 0;i<3;i++){
        for(j=0;j<3;j++){
            if(b[i][j] != 1)
                continue;
            
            
            int k,p,x;
            for(k=-1;k<2;k++)
            {
                for(p=-1;p<2;p++){
                    if(!((  ((i+k)>2) || ((i+k)<0)  ) || ( ((j+p)>2) || ((j+p)<0) )    )) 
                    {
                    if( (b[i+k][j+p] == 1) && b[i-k][j-p] == 8  ){
                         if(j ==1)
                        printf("%d,%d ",i-k,j-p);
                        else                      
                        printf("%d,%d ",i-k,j+2*p);
                       
                        exit(0);
                        
                    }
                    }else
                    {   int x,y;
                        if((j+k)<0)
                            x=3;
                        if((j+k)>2)
                            x=-3;
                        if((i+k)<0)
                            y=3;
                        if((j+k)>2)
                            y=-3;
                       if( (b[i+k+y][j+p+x] == 1) && b[i-k][j-p] == 8  )  {
                             printf("%d,%d ",i-k,j-p);
                             exit(0);
                       }
                    }
                     
                }
            }
            
        }
    }
    printf("NO");
    return 0;
}
