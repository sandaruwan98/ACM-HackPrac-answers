#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int diamonds = 0; 


//*((a+(i  )*size) + j  )       &arr[0][0]
void move(int i ,int j,int *a,int size){
    if(( *((a+(i )*size) + j  ) ) == 3)
        return;
    if(i < 0 ||  j < 0 || i > (size-1) ||  j > (size-1))
        return;
    if(( *((a+(i )*size) + j  ) ) == 1){
        diamonds++;
        *((a+(i )*size) + j  ) = 3;
    }

    if(( *((a+(i )*size) + j  ) ) == 2)
        return;

    if(( *((a+(i )*size) + j  ) ) == 0){
        *((a+(i )*size) + j  ) = 3;
    }

     move(i,j+1,a ,size);
     move(i,j-1,a ,size);
     move(i+1,j,a ,size);
     move(i-1,j,a ,size);
    
}


int main() {
int size,i,j;
scanf("%d",&size);
int a[size][size];
for ( i = 0; i < size; i++)
{
    for ( j = 0; j < size; j++)
    {
        scanf("%d",&a[i][j]);
    }

}



     move(0,0,&a[0][0],size);
     printf("%d",diamonds);
    return 0;
}
