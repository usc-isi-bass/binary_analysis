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
       int len1;
	   char str1[1000],str2[1000],*p,*p1,*p2,*p0,max;
	   while((scanf("%s",str1))!=EOF)
	   {
		   gets(str2);
		   len1=strlen(str1);
		   p2=str2;p1=str1;
			   max=str1[0];
		   for(p=str1;p<str1+len1;p++)
		    if(max<*p) 
			{
				   max=*p;
				   p0=p;
			}
			for(;p1<str1+len1;p1++)
			{
				if(p1==p0) 
				{
					printf("%c",*p1);
					for(;*p2!='\0';p2++)
					{
						if(*p2==' ') continue;
					    else printf("%c",*p2);
					}
				}
				if(p1!=p0)
			 	printf("%c",*p1);
			
			}	printf("\n");
	   }
}