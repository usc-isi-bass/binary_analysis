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
	char a[100][100]={'\0'},b;
	int i1=0,i2=0;
	while (cin.get(b)&&b!='\n')
	{
		if (b!=32)
			a[i1][i2++]=b;//????
		else if (b==32)
			i1++,i2=0;//???????
	}
	for (int d=i1;d>=1;d--)
        cout<<a[d]<<" ";//????
	cout<<a[0];
	return 0;
}