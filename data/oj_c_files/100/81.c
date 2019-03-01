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
	int group=0,i,num[26],maxc,max;
	char string[1000],*p;


	scanf("%s",string);
	for (i=0;i<=25;i++)
		num[i]=0;
	for (p=string;*p!='\0';p++)
		num[*p-'a']++;

	for (i=0;i<=25;i++)
		if (num[i]!=0)
		{
			printf("%c=%d\n",i+'a',num[i]);
			group=group+num[i];}
	if (group==0)
		printf("No\n");

	
	
	
}
