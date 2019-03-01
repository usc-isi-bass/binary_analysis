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
		char a[102];
		char b[102];
		gets(a);
		int i =0;
		for(;i<strlen(a);i++)
		{
			b[i] = a[i]+a[(i+1)%strlen(a)];
		}
		b[i]='\0';
		printf("%s",b);
		return 0;
}