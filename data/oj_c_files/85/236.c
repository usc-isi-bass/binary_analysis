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
	int j,n,i;
	char s[32];
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf ("%s",s);
		for (j=0;s[j];j++)
		{
			if (!((s[j]=='_')||(s[j]>='A'&&s[j]<='Z')||(s[j]>='a'&&s[j]<='z')||(s[j]>='0'&&s[j]<='9'&&j>0)))break;
		}
		if (s[j])
			printf ("no\n");
		else printf ("yes\n");
	}
	return 0;
}