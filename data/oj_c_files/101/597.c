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

int main(void)
{
	int a,b,c,i;
	char n[4];
	for(a=1;a<=3;a++)
		for(b=1;b<=3&&b!=a;b++)
		{
			c=6-a-b;
			if(a+(b>a)==3&&b+(a>b)+(a>c)==3&&c+(c>b)+(b>a)==3)
			{
				n[a]='A';n[b]='B';n[c]='C';
				for(i=1;i<=3;i++) cout<<n[i];
			}
		}
}