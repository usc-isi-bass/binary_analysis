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
	int a,b,c,A=0,B=0,C=0;
	char p[4];

	for(a=1;a<=3;a++)
		for(b=1;b<=3;b++)
		{
			A=0;B=0;C=0;
			if(b==a)break;
			c=6-a-b;
			if(b>c) A++; if(c==a) A++;
			if(a>b) B++; if(a>c) B++;
			if(c>b) C++; if(b>a) C++;
			if(A==3-a&&B==3-b&&C==3-c)
			{
				p[a]='A';
				p[b]='B';
				p[c]='C';
			}
		}
		for(int i=1;i<=3;i++)
			cout <<p[i];
	
	return 0;
}
