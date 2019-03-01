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



typedef long long ll;

char s[110], a[110], b[110];


int main()
{
	while(gets(s))
	{
		//printf("[%s]", s);
		scanf("%s%s ", a, b);	
		
		int i = 0;
		int lena = strlen(a);
		while(s[i])
		{
			if(s[i] == ' ')	putchar(' '), i++;
			else
			{
				int j = 0;
				for(; a[j]; j++)
					if(a[j] != s[i + j])
						break;
						
				if(a[j] == 0)
				{
					i += lena;	
					printf("%s", b);
				}
				else
				{
					while(s[i] && s[i]!= ' ')
						putchar(s[i++]);	
				}	
			}
		}
		
		puts("");
	}
	return 0;	
}
