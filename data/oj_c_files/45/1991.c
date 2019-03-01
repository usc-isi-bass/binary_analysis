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
	char a[52];
	char b[52];
    int i=0;
	scanf("%s",a);
	scanf("%s",b);
	for(int c=0;c<strlen(b);c++)
	{
			if(a[0]==b[c])
			{
				for(int n=0;n<strlen(a);n++)
				{
				    if(a[n]==b[c+n])
					{
						i++;
					}
				}
			if(i==strlen(a))
			{
				printf("%d",c);
			}
			}

	}
	return 0;
}
