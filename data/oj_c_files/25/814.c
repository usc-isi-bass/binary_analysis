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
int n,i,k;
scanf("%d",&n);
   int v[1001]={0};
     v[0]=1;
     while(n--)
{
for(i=0;i<=1000;i++)
v[i]=v[i]*2;
for(i=0;i<=1000;i++)
  {
if(v[i]>=10)
   {
       v[i]=v[i]-10;
        v[i+1]=v[i+1]+1;
  }
}
}
//printf("%d\n",v[1]);
int flag=0;
for(i=1000;i>=0;i--)
   {
     if(v[i]!=0)
       { for(k=i;k>=0;k--)

        printf("%d",v[k]);
  

flag=1;
  break;
    }
if(flag)
 break;
}

}
