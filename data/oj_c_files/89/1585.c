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

main()
{
     int n,k;
     scanf("%d",&n);
     int*p=(int*)malloc(n*sizeof(int)); 
     for(int i=0;i<n;i++)
          p[i]=0;
     for(;;)
     {
          int i,j;
          scanf("%d",&i);
          scanf("%d",&j);
          if(i==0&&j==0)
          break;
          p[j]=p[j]+1;     
     }
     for(k=0;k<n;k++)
     {
          if(p[k]==n-1)
          {
               printf("%d\n",k);
               break;             
          }        
     }
     if(k==n)
     printf("NOT FOUND\n");
     free(p);
     return 0;
}
