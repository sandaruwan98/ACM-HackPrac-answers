#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int maxp=0,maxptmp=0;
int tmp = 1;


void mult(int x,int y,int *a,int n){
     tmp = 1;
     int i,j=0;
        for ( i = 0; i < 4; i++)
            {
                tmp =  tmp * (*((a+(i+x  )*n) + (j+y)  )) ;
                j++;
               
            }
        if(maxptmp<tmp)
            maxptmp = tmp;
}



void multr(int x,int y,int *a,int n){
     tmp = 1;
     int i,j=n-1;
        for ( i = 0; i < 4; i++)
            {
                tmp =  tmp * (*((a+(i+x  )*n) + (j-y)  )) ;
                j--;
            }
        if(maxptmp<tmp)
            maxptmp = tmp;
}


int main() {
int n,i,j;
scanf("%d",&n);
int a[n][n];
for ( i = 0; i < n; i++)
{
    for ( j = 0; j < n; j++)
    {
        scanf("%d",&a[i][j]);
    }

}

// for up line
for ( j = 0; j < n; j++)
    {
        tmp = 1;
        for ( i = 0; i < n; i++)
            tmp*=a[i][j];
  
                
            
        //tmp = a[0][j]*a[1][j]*a[2][j]*a[3][j];
        
        if(maxptmp<tmp)
            maxptmp = tmp;
    }

 if(maxp<maxptmp)
        maxp = maxptmp;


tmp = 1;
// for left line
for ( j = 0; j < n; j++)
    {
        tmp = 1;
        for ( i = 0; i < n; i++)
            {
                tmp*=a[j][i];
                
            }
        //tmp = a[0][j]*a[1][j]*a[2][j]*a[3][j];
        if(maxptmp<tmp)
            maxptmp = tmp;
    }

    
 if(maxp<maxptmp)
        maxp = maxptmp;


// for diagonal line left
    int d = n-3;
    for ( i = 0; i < d; i++)
    {
        int x=0,y=0;
         int q;
        //center
        if (i == 0)
        {
           
            for ( q = 0; q < d; q++)
                mult(x++,y++,&a[0][0],n);
        }
        else
        {
            x=0,y=0;
            for ( q = i; q < d; q++)
                mult(i+x++,y++,&a[0][0],n);
            x=0,y=0;
            for ( q = i; q < d; q++)
                mult(x++,i+y++,&a[0][0],n);
        }
        
        





    }
    

if(maxp<maxptmp)
        maxp = maxptmp;





//for diagonal line right
    
    for ( i = 0; i < d; i++)
    {
        int x=0,y=0;
         int q;
        //center
        if (i == 0)
        {
           
            for ( q = 0; q < d; q++)
                multr(x++,y++,&a[0][0],n);
        }
        else
        {
            x=0,y=0;
            for ( q = i; q < d; q++)
                multr(i+x++,y++,&a[0][0],n);
            x=0,y=0;
            for ( q = i; q < d; q++)
                multr(x++,i+y++,&a[0][0],n);
        }
        
        





    }
    

if(maxp<maxptmp)
        maxp = maxptmp;





 
     printf("%d",maxp);
    return 0;
}

