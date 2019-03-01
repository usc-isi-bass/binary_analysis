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


int kkkk(int a,int b)
{
     int k;
     if (b==1) k=1;
     else if (a==1) k=1;
     else if (a<=b) k=1+kkkk(a,a-1); 
     else k=kkkk(a-b,b)+kkkk(a,b-1);
     return k;
}                    

main()
{
      int i,n,a[20],b[20],k;
      scanf("%d",&n);
      for (i=0;i<n;i++)
      {
          scanf("%d",&a[i]);
          scanf("%d",&b[i]);
      }
      for (i=0;i<n;i++)
      {
          k=kkkk(a[i],b[i]);
          printf("%d\n",k);
      }
}