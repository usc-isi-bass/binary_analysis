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
	char str1[100],str2[100];
	int i,j,len1,len2;
	scanf("%s%s",str1,str2);
	if((len1=strlen(str1))!=(len2=strlen(str2)))printf("NO\n");
         else
   {
	for(i=0;i<len1;i++)
		for(j=0;j<len2;j++)
		{
			if(str1[i]==str2[j])
				str1[i]='\0',
				str2[j]='\0';
		}
	for(i=0;i<len1;i++)
		if(str1[i]!='\0')break;
	if(i<len1)printf("NO\n");
	else printf("YES\n");
   }
}