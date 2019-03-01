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

int a[100000][3],s[100000],x=0,y=0,z=0,x1=0,y1=0,z1=0;
int main()
{
   int n,i,j;
   scanf("%d",&n);
   for (i=1;i<=n;i++)
   {
	   for (j=0;j<3;j++)
	   {scanf("%d",&a[i][j]);}
		   s[i]=a[i][1]+a[i][2];
   }
   for (i=1;i<=n;i++)
   {
	   if (s[i]>x)
	     { x=s[i];
x1=a[i][0];}
   }
   
 for (i=1;i<=n;i++)
 {
	 if(s[i]>y&&i!=x1)
 { y=s[i];
y1=a[i][0];}
 }
 
for  (i=1;i<=n;i++)
{
	 if(s[i]>z&&i!=x1&&i!=y1)
  {z=s[i];
z1=a[i][0];  }
 }
 
 printf("%d %d\n",x1,x);
    printf("%d %d\n",y1,y);
    printf("%d %d\n",z1,z);

	return 0;
}
