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
	char a[100],b;
	int i1=0;
	while (cin.get(b)&&b!='\n')
		a[i1++]=b;//shuruzifuchuan
	char c[100];
	int j=0;
	for (int i2=0;i2<=i1-1;i2++)
	{
		if (a[i2]==32&&a[i2+1]==32)
			continue;//duogekonggexianglin,zhiquyige
		else
			c[j++]=a[i2];
	}
	for (int k=0;k<=j-1;k++)
		cout<<c[k];
	return 0;
}