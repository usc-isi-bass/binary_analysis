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
	char a[101];
	cin.getline(a,101);
	int p = strlen(a);
	for (int i=0;i<p;i++)
	{
	if(a[i]!=' ')
	cout << a[i];
	if(a[i]==' ' && a[i+1]==' ' )
	continue;
	if(a[i]==' '&&a[i+1]!=' ')
	cout << " ";
	}
	return 0;
}