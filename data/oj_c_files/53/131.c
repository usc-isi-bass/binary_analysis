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
int n,a[100],b[100];
int i,j,*pa,*pb,N;
scanf("%d",&n);
for(i=0;i<=n-1;i++) 
scanf("%d",&a[i]);
pa=a;
for(i=0;i<=n-1;i++)
{
         pb=&a[i+1];
         for(j=0;j<=n-2-i;j++)
         {
                 if((*pb)==(*pa)) (*pb)=0;
                 pb++;
         }
         pa++;
}
pa=&a[0];
pb=&b[0];
N=0;
for(i=0;i<=n-1;i++)
{
         if((*pa)!=0)
         {
                 *pb=*pa;
                 pb++;
                 N++;
         }
         pa++;
}
for(i=0;i<=N-2;i++)
printf("%d,",b[i]);
printf("%d\n",b[i]);
return 0;
}