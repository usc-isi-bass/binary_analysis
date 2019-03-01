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
	char s[50], w[50];
	int i, j=0, mark=0;
	scanf("%s %s", s, w);
	for (i=0; i<strlen(s); i++)
	{
		while (j<strlen(w))
		{
		    if (s[i]==w[j])
			{
				mark=j;
				j=mark+1;
				break;
			}   
			else 
			{
				j++;
			}
		
		}
		
	}
	printf("%d", mark-strlen(s)+1);
	
		return 0;
}