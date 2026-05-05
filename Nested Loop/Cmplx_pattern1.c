#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <limits.h>
#include <float.h>
#include <assert.h>
#include <errno.h>



int main()
{

    int n, star;
    scanf("%d", &n);
    //star = 1;
    for(int i=1;i<=n;i++){
        
        // for(int j=1;j<=n-i;j++){
        //     printf(" ");
        // }
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
       
    }
    //int space=1;
    for(int i=n-1;i>=1;i--){
        
       for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        //space++;

        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
        
    }

    return 0;
}
