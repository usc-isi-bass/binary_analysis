#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    int n,a;
    scanf("%d %d\n",&n,&a);
    int sz[n];
    for(int i=0;i<n-1;i++){scanf("%d ",&sz[i]);}
    scanf("&d",&sz[n-1]);
    for(int i=0;i<n-1;i++)
    {
      for(int k=i+1;k<n;k++)
      { if(sz[i]+sz[k]==a)
         {printf("yes");return 0;}
        if(i==n-2&&k==n-1&&sz[i]+sz[k]!=a){printf("no");return 0;} 
      }
    }
    
 return 0;  
}
 
