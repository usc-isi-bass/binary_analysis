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
	int i,j;
	char s1[80],s2[80];
	gets(s1);
	gets(s2);
	for(i=0;s1[i]!='\0';i++)
	{
		if((s1[i]>='A')&&(s1[i]<='Z'))
			s1[i]+=32;
	}
	for(j=0;s2[j]!='\0';j++)
	{
		if((s2[j]>='A')&&(s2[j]<='Z'))
			s2[j]+=32;
	}
	if(strcmp(s1,s2)>0)
		printf(">");
	else if(strcmp(s1,s2)<0)
		printf("<");
	else
		printf("=");
	scanf("%d",&j);
}

