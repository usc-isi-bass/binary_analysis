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
	int n;
	char a[100],b[100],c[100];
	scanf("%s",a);
	scanf("%s",b);
	scanf("%s",c);
	n = strlen(b);
	int i = 0;
	while(a[i]!='\0')
	{
		int m = 0;
		while(m<n)
		{
			if (a[i+m] == b[m])
				m++;
			else
				break;
		}
		if(m == n)
		{
			int p = 0;
			while(p<i)
			{
				printf("%c",a[p]);
				p++;
			}
			printf("%s",c);
			p = p + n;
			while(a[p] != '\0')
			{
				printf("%c",a[p]);
				p++;
			}
			break;
		}
	i++;
	}
	if(a[i] == '\0')
		printf("%s",a);
	return 0;
}