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
	char s[102]={'\0'},a[60][20]={'\0'},*p1,*p2;
	gets(s);
	int count=0; int i;
	char *p;
    p1=s;
	p2=s;
	while(*p1!='\0')
	{
		while(*p1!=' '&&*p1!='\0')
		p1++;
		
       
		for(i=0,p=p2;p<p1;p++,i++)
			a[count][i]=*p;
		count++;
		p1++;
		p2=p1;
	}

	for(i=count-1;i>0;i--)
		printf("%s ",a[i]);
	printf("%s\n",a[0]);
}
		
  
