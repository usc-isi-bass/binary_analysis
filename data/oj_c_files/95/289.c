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

int main(int argc, char* argv[])
{
	char n[80], m[80];
	gets(n);
	gets(m);
	int x, y, i, k=0;
	x=strlen(n);
	for (i=0;n[i]!='\0';i++)
	{
		if (n[i]>='A'&&n[i]<='Z')
		{
			n[i]=n[i]+32;
		}
	}
	for (i=0;m[i]!='\0';i++)
	{
		if (m[i]>='A'&&m[i]<='Z')
		{
			m[i]=m[i]+32;
		}
	}
	for (i=0;n[i]!='\0';i++)
	{
		if (n[i]==m[i]) k++;
		if (n[i]>m[i]) 
		{
			printf(">\n");
			break;
		}
		if (n[i]<m[i])
		{
			printf("<\n");
			break;
		}
	}
	if (k==x) printf("=\n");
	

	return 0;
}