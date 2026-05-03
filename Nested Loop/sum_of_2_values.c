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
  int t;
  scanf("%d",&t);
  while(t--){
  int n;
  bool flag=false;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  int x;
  scanf("%d",&x);
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      if(a[i]+a[j]==x){
        // printf("%d %d\n",a[i],a[j]);
        // printf("%d %d\n",i,j);
        // break;
        flag=true;
        printf("Yes\n");
      }
      
    }
    
  }
  if(flag==false){
    printf("No\n");
  }
}
    return 0;
}
