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
{ int n,k,i,j,c; 
scanf("%d %d",&n,&k);
 int a[100];
 for(j=1;;j++) 
{
for(i=0;i<n-1;i++) 
{ 
a[0]=n*j+k; 
a[i+1]=a[i]*n/(n-1)+k; 
} 
c=0;
while(a[c]%(n-1)==0&&c<n) { c++; }
 if(c>=i) break;
} 
printf("%d",a[n-1]);
return 0;
}