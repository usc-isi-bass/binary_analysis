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

int f(char str1[100],char str2[100])
{char *p,*q;
int s,a[26],b[26],i=0;
	for (i=0;i<26;i++)
	{a[i]=0;b[i]=0;}
	for (p=str1;p<strlen(str1)+str1;p++)
	{/*printf("/%d/",*p);*/for (i=0;i<26;i++)
	if (*p==i+97) a[i]++;}
	for (q=str2;q<strlen(str2)+str2;q++)
		for (i=0;i<26;i++)
		if (*q==i+97)b[i]++;
	for (i=0;i<26;i++)
	{if (a[i]!=b[i]) break;
		
		}
if (i==26) printf("YES");
		else printf("NO");

	
}

void main()
{
	char str1[100],str2[100];
	scanf("%s %s",str1,str2);
	f(str1,str2);


}

	

	



