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
	char a[30]=" ";
	gets(a);
	int g=1;
	char *p=a;
	for(int i=0;i<30;i++)
	{
		if(*(p+i)>='0'&&*(p+i)<='9')
		{
			cout<<*(p+i);
			g=1;
		}
		if((*(p+i)<'0'||*(p+i)>'9')&&g==1)
		{
			cout<<endl;
			g=0;
		}
	}
	return 0;
}