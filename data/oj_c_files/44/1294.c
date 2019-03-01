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

int change(int x)
{
	int t,i;

	t=0;
	i=0;
	while(x!=0)
	{
		t=t*10+x%10;
		x=x/10;
		i++;
	}
	return(t);
}
void main()
{
	int i,a[6];
	for(i=0;i<6;i++)
		scanf("%d",&a[i]);
	for(i=0;i<6;i++)
		printf("%d\n",change(a[i]));
}
