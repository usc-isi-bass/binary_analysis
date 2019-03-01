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
    int n, k=0, s, i;
	scanf("%d", &n);
	s=n;
	while(s>0)
	{
		s/=10;
		k++;
	}
	for(i=0;i<k;i++)
	{
        int t=0;
		t=n%10;
		printf("%d", t);
		n/=10;
	}
	return 0;

}

