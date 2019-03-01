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
	char a[100], b[100], c[100];
	char *p;
	int i, len2;
	cin.getline(a,100);
	cin.getline(b,100);
	cin.getline(c,100);
	len2 = strlen(b);
	p = strstr(a,b);
	if(p != NULL)
	{
		for(i = 0;a+i != p;i++)
			cout << a[i];
		cout << c;
		if(*(p+len2) != '\0')
		{
			for(i = 0;*(p+len2+i) != '\0';i++)
				cout << *(p+i+len2);
		}
	}
	else cout << a <<endl;
	return 0;
}

