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
	int i,n1,n2,p;
	double rate,m=0.0;
	char str1[501],str2[501];
	scanf("%lf",&rate);
	scanf("%s",str1);
	scanf("%s",str2);
	n1=strlen(str1);
	n2=strlen(str2);
	p=0;
	if(n1==n2)
	{
	   for(i=0;i<n1;i++)
	   {if(str1[i]!='A'&&str1[i]!='T'&&str1[i]!='C'&&str1[i]!='G')
	        p=1;
	   else if(str2[i]!='A'&&str2[i]!='T'&&str2[i]!='C'&&str2[i]!='G')
		    p=1;
	   if(p==1)
	   {
		   printf("error");
		   break;
	   }
	   if(str1[i]==str2[i])
	       m+=1.0;
	   }
	   if(p==0)
	      if(m/n1>=rate)
		   printf("yes");
	      else printf("no");
	}
	else printf("error");

	return 0;
}