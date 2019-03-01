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

//????
void shan(char str[])
{
	int n;
	n=strlen(str);//???????
	if(str[n-1]=='r')
		str[n-2]='\0';
	else 
	{
		if(str[n-1]=='y')
		str[n-2]='\0';
	
		else
		str[n-3]='\0';
	}
	printf("%s\n",str);
}

void main()
{
	int a,i;
	char str[20];
    scanf("%d",&a); //a?????
    for(i=0;i<a;i++)
	{
		scanf("%s",str);
		shan(str);
	}
}
