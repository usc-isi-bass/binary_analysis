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
	char str[100],str1[20],str2[20],*p,str3[40][20],STR[100]="";
	int i,k,m,x;
	gets(str);
	gets(str1);
	gets(str2);
	k=0;
	m=0;
    for(p=str;*p!='\0';p++)
	{
		str3[k][m]=*p;
		m++;
		if(isalpha(*p)*isalpha(*(p+1))==0)
		{
			str3[k][m]='\0';
			k++;
			m=0;
		}
	}
	str3[k][m]='\0';
	x=k;
	for(i=0;i<=k;i++)
	{
		if(strcmp(str3[i],str1)==0)
			strcpy(str3[i],str2);
	}
	for(i=0;i<=k;i++)
	{
		strcat(STR,str3[i]);
	}
	printf("%s",STR);
}
		

