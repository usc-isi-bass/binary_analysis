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

int main ()
{
	int a,b,c,d,e,f,j=0;
	for(;;)
	{
		scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		j=0;
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0)
		{
			break;
		}
		d+=12;
		if(f-c<0)
		{
			e--;
			j+=60+f-c;
		}else{
			j+=f-c;
		}
		if(e-b<0)
		{
			d--;
			j+=(e-b+60)*60;
		}else{
			j+=(e-b)*60;
		}
		j+=(d-a)*60*60;
		printf("%d\n",j);
	}
	return 0;
}