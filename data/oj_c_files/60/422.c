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
	int n;//??n???
	int i, j, sign;//??????
	scanf("%d", &n);//??n
	int judge;
	if((n==1)||(n==2)||(n==3))
	{
		printf("empty\n");
	}
	else
	{
		judge=0;
	    for(i=3;i<=n;i++)//????4~n???????????
		{
	      	sign=1;
	        for(j=2;j<i;j++)//?2~i?????????????i and i+2
			{
		    	if(((i+2)%j==0)||(i%j==0))//????i???????
				{
				    sign=0;//????????
			    	break;//i???????????
				}
		    	else
			    	continue;//??????j
			}
		    if((sign==1)&&((i+2)<=n))//????sign??=1???i+2<=n
			{
				judge=1;
		    	printf("%d %d\n", i, i+2);
			}
	    	
		}
    	if(judge==0)
		{
	    	printf("empty");
		} 
	}
	return 0;
}
