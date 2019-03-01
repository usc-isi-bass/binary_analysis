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
	int m,i,k,t;
	scanf("%d",&m);
	for(i=3;i<=(m/2);i=i+2)
	{
	for(t=2;t<=(i/2);t++)
	if(i%t==0)
	break;
	if(t>(i/2))
	{
	for(t=2;t<=((m-i)/2);t++)
	if((m-i)%t==0)
		break;
	if(t>(m-i)/2)
		printf("%d %d\n",i,m-i);
	}
	}
}