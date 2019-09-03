#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>





int main() {
    
    int n,i,j,k;
    int right = 0;
    int obt = 0;
    int acc = 0;
    scanf("%d",&n);
    int stick[n];
    for ( i = 0; i < n; i++)
        scanf("%d",&stick[i]);
        
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            for ( k = 0; k < n; k++){
                if(i == j || i==k || j==k)
                    continue;
                if( ( (stick[i]*stick[i]) == (stick[j]*stick[j]) + (stick[k]*stick[k])  ) && (stick[j]<stick[k])  )
                {
                    right++;
                }

                //  if ( (stick[i]*stick[i]) < (stick[j]*stick[j]) + (stick[k]*stick[k])  )
                // {
                //     right++;
                // }
                
            }
        }
    }

    printf("%d",right);
    return 0;
}
