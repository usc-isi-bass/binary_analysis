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

int su(int z)
  {
       int i=2,t=0,k=sqrt(z);
       for(i=2;i<=k;i++)
        { 
          if(z%i==0)
          break;
        }
        if(i>k)  t=1;
        return t;
}
int main()
{
    int m,i,j;
    scanf("%d",&m); 
          for(i=3;i<=m/2;i++)
           {  j=m-i;
             if(su(i)&&su(j))
             {printf("%d %d\n",i,j);
             }
		  }
      return 0;
}
