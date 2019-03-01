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

void main()
{
int i,j,k,n,m;
k=0;m=0;
int a[300];
int b[100]={0};
scanf("%d",&n);
for(i=0;i<n;i++)
  scanf("%d",&a[i]);

for(i=n-1;i>=0;i--)
  for(j=0;j<i;j++)
	  if(a[i]==a[j]&&i!=j)
          b[i]++;
for(i=0;i<n;i++)
 if(b[i]==0)
	 k++;
for(j=0;j<n;j++)
{if(b[j]==0)
  {printf("%d",a[j]);
  m++;
  if(m<k)
	  printf(",");}}
}