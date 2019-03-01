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

int yu7wuguan(int i);
int main(){
    int sz[100],i,n,k;
    int max,e;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&sz[i]);
       }
    for(k=1;k<=2;k++)
    {
                     max=0;
        for(i=0;i<=n-k;i++)
        {
          if(sz[i]>sz[max])
          {
            max=i;
            }
            }
          if(max!=n-k)
          {
             e=sz[max];
             sz[max]=sz[n-k];
             sz[n-k]=e;
             }
           printf("%d\n",sz[n-k]); 
             }
                 
                return 0;
        }
 
