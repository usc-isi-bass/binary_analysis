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
{char a[1200];
 int b[300]={0},c[300],i,j,temp,m,n;
 gets(a);
 m=strlen(a);
 for(i=0,j=0;i<m;i++)
 {if(a[i]==',')j++;
  else b[j]=10*b[j]+a[i]-'0';}

		 
 n=j+1;

 
for(i=0;i<n-1;i++)
for(j=0;j<n-1-i;j++)
 if(b[j]>b[j+1])
   {temp=b[j];
    b[j]=b[j+1];
	b[j+1]=temp;
   }

  if(b[0]==b[n-1])printf("No");
 else 
 { for(i=n-1;i>=0;i--)
    if(b[i]!=b[i-1])
	{ printf("%d",b[i-1]);break;}
}}