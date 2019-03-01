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
{int i=0,j=0,m=0,s=0,r=-1;
char c;
	int a[300]={0};
	scanf("%c",&c);
while(c!='\n')
{if(c!=',')a[j]=10*a[j]+c-'0';
else j++;
scanf("%c",&c);}
if(a[2]==0)printf("No");
else
{for(j=0;j<=299;j++)
   {	   if(a[j]>m)
{s=m;m=a[j];r++;}
           else
		   {if(a[j]<m&&a[j]>s)
		   {s=a[j];r++;}
		   }
   }
   if(r!=0)printf("%d",s);
   else printf("No");
}}