#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int check(int a ,int b){
    if(a && !b)
        return 0;
    if(!a && b)
        return 1;
    if(a && b)
        return 2;
    else
        return 3;
}


int main() {
int gates,k;
scanf("%d",&gates);
for ( k = 0; k < gates; k++)
{
    
    int s1,s2,d1,d2,r =1,  i;
    char pile[4][10];

    scanf("%d",&s1);
    scanf("%d",&s2);
    scanf("%d",&r);
    scanf("%d",&d1);
    scanf("%d",&d2);
    
    int cell[r][2];
    char puz[10];
    for ( i = 0; i < 4 ; i++)
    {
        scanf("%s",pile[i]);
    }

    for ( i = 0; i < r ; i++){
        cell[i][0] = s1++;
        cell[i][1] = s2++;




        int a,b;
        a = ((cell[i][0])%d1 == 0);
        b = ((cell[i][0])%d2 == 0);
        printf("%s ",pile[check(a,b)]);

        a = ((cell[i][1])%d1 == 0);
        b = ((cell[i][1])%d2 == 0);
        printf("%s ",pile[check(a,b)]);

         
         printf("\n");
    }




}
    return 0;
}
