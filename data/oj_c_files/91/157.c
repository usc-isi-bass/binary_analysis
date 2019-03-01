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

int hh(char stu1,char stu2)
{
	int a1,a2;
	int b;
	a1=stu1;a2=stu2;
    b=a1+a2;
	return(b);
}
int main()
{
	char s[1000]={'\0'};
	int b[1000]={0};
	int i;
	gets(s);
	i=0;
	while(s[i+1]!='\0')
	{
		b[i]=hh(s[i],s[i+1]);
		i++;
	}
	b[i]=hh(s[0],s[i]);
	for(i=0;b[i]!=0;i++)
		printf("%c",b[i]);
	return 0;
	
}