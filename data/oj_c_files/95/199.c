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
	int i;
	char a,b;
	char str1 [20],str2 [20];
	gets(str1);
	gets(str2);
	for (i=0;i<20;i++)
	{
		if(str1[i]<='Z'&&str1[i]>='A')
		{
			a=str1[i];
			str1[i]=a+32;
		}
		if (str2[i]<='Z'&&str2[i]>='A')
		{
			b=str2[i];
			str2[i]=b+32;
		}
	}
	if (strcmp(str1,str2)>0)
	printf(">\n");
	if (strcmp(str1,str2)==0)
	printf("=\n");
	if (strcmp(str1,str2)<0)
	printf("<\n");
}
