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
 int a[6][6],s[6],h[6],l[6];
 int i,j,p;
 for(i=1;i<=5;i++)
 {
   for(j=1;j<=5;j++)
   scanf("%d",&a[i][j]);
 }
 
 for(i=1;i<=5;i++)  
 {s[i]=0;
  h[i]=0;
  l[i]=0;
  for(j=1;j<=5;j++)
  {if(a[i][j]>s[i]) {s[i]=a[i][j];h[i]=i;l[i]=j;}
  }
 }
 int q=1;
 for(i=1;i<=5;i++)
 {p=0;
  for(j=1;j<=5;j++)
  {
   if(a[j][l[i]]<s[i]){p=1;}
   
  }
 if(p==0) printf("%d %d %d",h[i],l[i],s[i]);
 q=q*p;
 }
 if(q==1) printf("not found");
 
 return 0;   
}