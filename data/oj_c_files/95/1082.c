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
	char str1[80],str2[80];
	int a,i,k=0;
	gets(str1);
	gets(str2);
	a=strlen(str1);
	for(i=0;i<a;i++)
	{
		if(str1[i]>='a'&&str1[i]<='z') str1[i]=str1[i]-32;
		if(str2[i]>='a'&&str2[i]<='z') str2[i]=str2[i]-32;
		if(str1[i]==str2[i]) 
		{
			k++;
			continue;
		}
		else if(str1[i]>str2[i]) printf(">\n");
		else printf("<\n");
		break;
	}
	if(k==a) printf("=\n"); 
	return 0;
}