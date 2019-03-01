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
	char s[100],*p;
	int n,i,t=0,m;
	gets(s);
	n=strlen(s);
	p=s;
	for(i=n-1;i>=0;i--)
	{
		t=t+1;
	//	printf("|%c|",*(p+i));
		if(s[i]==' ') 
		{
			for(m=1;m<=t-1;m++) 
		printf("%c",*(p+i+m));
		printf(" "); 
		//printf("t=%d",t);
		t=0;
		}
		if(i==0) {for(m=0;m<t;m++) printf("%c",*(p+i+m)); }
	}
}

