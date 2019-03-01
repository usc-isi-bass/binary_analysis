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
	void NIXU(int x);
	int n;
	scanf("%d",&n);
	NIXU(n);
}
void NIXU(int x)
{
	int i;
	if((i=x/10)!=0)
	{
		putchar(x%10+'0');
		NIXU(i);
	}
	else putchar(x+'0');
}