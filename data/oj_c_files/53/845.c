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
    int sz[300];
    int n,i,j,l;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&sz[i]);
        }
   printf("%d",sz[0]);
   for(j=1;j<n;j++){
      int f=0;
      for(l=0;l<j;l++){
        if(sz[j]==sz[l])  f=1;
        }
        if(f==0) printf(",%d",sz[j]);
        }
        return 0;
        }