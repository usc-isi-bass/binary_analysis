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
	int n,s,x,i;
	scanf("%d",&n);
	s=0;
    for(i=1;i<=n;i++){
		x=i/10;		
		if(i % 7 == 0 || x == 7 || i-(x*10) == 7)
		{
			;
		}		
		else
		{
			s=s+i*i;
		}	
	}
	printf("%d",s);
	return 0;
}