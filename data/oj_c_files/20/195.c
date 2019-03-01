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
	int s;
	for(;;)
	{
		char str1[100],str2[5],str3[100]={'\0'},m;
		int i,j,l;
		s=scanf("%s %s",&str1,&str2);
		if(s!=2)
			break;
		else
		{  for(i=0,m=str1[0];i<strlen(str1);i++)
		{if(m<str1[i])
	      m=str1[i];}
	   for(i=0;i<strlen(str1);i++)
     	if(str1[i]==m)
		{l=i;break;}
         for(i=0;i<=l;i++)
					 str3[i]=str1[i];
					 for(i=0;i<3;i++)
					str3[l+1+i]=str2[i];
					 for(i=0;i<(strlen(str1)-l-1);i++)
						 str3[l+4+i]=str1[l+i+1];
					 printf("%s\n",str3);

		}
	}
}