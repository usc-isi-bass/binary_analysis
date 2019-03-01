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

main()
{
	int a[80][2],i,j,s;
	for(j=0;;j++)
	{
		s=0;
		scanf("%d%d", &a[j][0], &a[j][1]);
		if(a[j][0]==0) break;
	for (i=2; i<=a[j][0]; i++)
		s=(s+a[j][1])%i;
	printf("%d\n",s+1);
	}
}
