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

int data[9000];
int main()
{
	int n;
	int i, j;
	scanf("%d",&n);
	scanf("%d%d",&i,&j);
	while((i != 0)||(j != 0))
	{
		data[i] = -1;
		data[j]++;
		scanf("%d%d",&i,&j);
	}
	for (i = 0; i < n; i++)
	{
		if (data[i] == n-1)
		{
			printf("%d\n",i);
			break;
		}
	}
	if (i == n)
		printf("NOT FOUND\n");
	return 0;
}