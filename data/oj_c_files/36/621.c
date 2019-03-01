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
 int m,n;
 int i,j,p,q;

 char str1[100],str2[100],temp;
 scanf("%s%s",str1,str2);
 m=strlen(str1);
 for(i=0;i<m-1;i++)
	 for(j=0;j<m-1-i;j++)
		 if(str1[j]>str1[j+1])
		 {
				temp=str1[j];
				str1[j]=str1[j+1];
				str1[j+1]=temp;
		 }

n=strlen(str2);
for(p=0;p<n-1;p++)
   for(q=0;q<n-1-p;q++)
	   if(str2[q]>str2[q+1])
	   {
		temp=str2[q];
		str2[q]=str2[q+1];
		str2[q+1]=temp;
	   }
	  
 if(strcmp(str1,str2)==0)
	 printf("YES");
 else
	 printf("NO");
 }
