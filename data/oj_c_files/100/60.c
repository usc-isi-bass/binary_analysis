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
	char a[300];
	gets(a);
	int num[26]={0,};
	int i,j;
	for(i=0;a[i]!='\0';i++)
	{
		if((a[i]-'a')>=0&&(a[i]-'a')<=25)
			num[a[i]-'a']+=1;
	}
	for(i=0,j=0;i<=25;i++)
	{
		if(num[i]!=0)
		{
			putchar((char)(i+'a'));
			printf("=%d\n",num[i]);
			j++;
		}
	}
	if(j==0)
		printf("No");
	return(0);
}