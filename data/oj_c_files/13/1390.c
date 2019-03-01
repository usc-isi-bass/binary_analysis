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
	int n;
	int histgram[101];
	int i;
	int x;

	scanf("%d",&n);
	for (i=0; i<101; i++)
	{
		histgram[i]=0;
	}

	scanf("%d", &x);
	histgram[x]++;
	printf("%d",x);

	for (i=0; i<n-1; i++)
	{
		scanf("%d", &x);
		if (!histgram[x])
		{
			printf(" %d",x);
		}
		histgram[x]++;
	}

	return 0;
}