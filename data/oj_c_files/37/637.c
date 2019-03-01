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
    char c[100000];
    int n,m;
    scanf("%d\n",&n);
    for (int i=0;i<n;i++)
    {
        gets(c);
        for (int j=0;c[j]!='\0';j++)
		{
			m=0;
			for (int k=0;c[k]!='\0';k++)
			{
				if (k!=j)
				{
					if (c[k]==c[j])
					{
						m=1;
						break;
					}
				}
			}
			if (m==0)
			{
				printf("%c\n",c[j]);
				break;
			}
		}
		if (m==1) printf("no\n");
    }
    return 0;
}