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
int n;
scanf("%d",&n);
char s[20][50];
int i;
int k;
char *m;
for(i=0;i<n;i++)
{
	scanf("%s",s[i]);
}
for(i=0;i<n;i++)
{

	for(m=s[i];*m!='\0';m++)
	{
	}
	m--;

	if(*m=='r'||*m=='y')
	{
		*(m-1)='\0';
	}
	else 
	{
		*(m-2)='\0';
	}
	printf("%s\n",s[i]);
}
return 0;
}


