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
	int n,s,i,a;
	scanf("%d",&n);
	i=1;
	s=0;
	while(i<=n){
		a=i/10;
		if(i%7!=0)
			if((i-7)%10!=0)
				if((a-7)%10!=0)
					s=s+i*i;
		i++;
	}
	printf("%d",s);
	return 0;
}