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


int i=1,n,k,t=1;
int apple(void)
{
    int re;
	if(t==n)
    {
	    return i*n+k;
	}
	else
	{
		for(;;i++)
		{
			t++;
	        re=apple();
			t--;
		    if(re%(n-1)==0)
			    return re/(n-1)*n+k;
		}
		
	}
}

int main()
{
	 int s;
     scanf("%d%d",&n,&k);

	 s=apple();
	 printf("%d",s);
	 return 0;

}