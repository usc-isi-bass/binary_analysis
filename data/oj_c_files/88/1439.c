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
	char a[30];
	gets(a);
	int m=0;
	for(int i=0;i<30;i++)
	{
		if(a[i]>=48&&a[i]<58)
		{
			cout <<a[i];
			m=1;
		}
		else if(m==1)
		{
			cout <<endl;
			m=0;
		}
		else
			continue;
	}
	if(m==1)
		cout <<endl;
	return 0;
}
