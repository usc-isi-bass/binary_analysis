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
 int k,m,i,j,n;
 int s1[20000],s2[20000];
 scanf("%d",&n);
 for(i=0;i<n;i++)
 scanf("%d",&s1[i]);
 for(i=n-1,m=0;i>=0;i--)
 {k=0;
  for(j=i-1;j>=0;j--)
  {if(s1[i]==s1[j])
   k++;}
  if(k==0)
  {s2[m]=s1[i];
   m++;}
}
  s2[m]='\0';
for(n=m-1;n>0;n--)
{printf("%d ",s2[n]);
 }
printf("%d",s2[0]);
}
