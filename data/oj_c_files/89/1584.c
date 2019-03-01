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


int n;
int in[SIZE],out[SIZE];

int main()
{
	int i;
	scanf("%d",&n);
	for(i = 0;i < n;i++)
		in[i] = out[i] = 0;
	int a=1,b;
	while(1)
	{
		scanf("%d%d",&a,&b);
		if((a==0)&&(b==0))
			break;
		out[a]++;
		in[b]++;
	}
	for(i = 0;i < n;i++)
		if((in[i] == n-1)&&(out[i] == 0))
		{
			printf("%d\n",i);
			return 0;
		}
}