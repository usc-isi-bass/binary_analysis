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

/***************
*??????
*?????
****************/
int main()
{
	char a[101], b[101];           
	int l;
	cin.getline(a,101);
	l = strlen(a);
	for(int i=0; i < l; i++)
	{
		if(i < l-1)
		{
			b[i] = (char)(a[i] + a[i+1]);
		}
		else
		{
			b[i]= (char)(a[i] + a[0]);
		}
	}
	for(int j=0; j < l; j++)
	{
		cout << b[j];
	}
return 0;
}