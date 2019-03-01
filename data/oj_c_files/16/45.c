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
	int a,s,p;
	scanf("%d",&a);
	s=a;
	while(s!=0)
	{
		p=s%10;
		printf("%d",p);
		s=(s-p)/10;
	}
	return 0;
}