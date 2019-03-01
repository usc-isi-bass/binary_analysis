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
   char s1[13],s2[5];
   int i,j,m,a;
   while (scanf("%s%s",s1,s2)!=EOF)
     {
	 a=0;
	 m=strlen(s1);
	 for(i=0;i<m;i++)
	 {
		 if(s1[i]>s1[a])
           a=i;
	 }
	 for(i=m-1;i>a;i--)
		 s1[i+3]=s1[i];
	 for(i=a+1,j=0;i<a+1+3;i++,j++)
		 s1[i]=s2[j];
	 for(i=0;i<m+3;i++)
	 printf("%c",s1[i]);
printf("\n");
   }
}