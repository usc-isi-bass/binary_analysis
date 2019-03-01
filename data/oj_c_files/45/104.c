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

int main ()
{
	char s1[50],s2[50];
	int i,j,d;
	scanf ("%s %s",&s1,&s2);
	int l = strlen (s1);
	for (j=0;s2[j]!='\0';j++)
		{
			if (s1[0]==s2[j]) 
			{
				d = j;
				break;
			}
		}
	for (i=1;i<l;i++,j++)
	{
		if (s1[i]==s2[j+1]) continue;
	}
	printf ("%d",d);
		
					

	return 0;
}