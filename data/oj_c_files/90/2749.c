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


int M,N;
 
int apple(int num,int m)
{
	int i,a;
    int sum=0;
	if(num==0)
	    return sum;
	

	else
	{	if(m>num)  
		for(i=num;i>0;i--)
		{	a=m-i;
			sum+=apple(i,a);
		}
        else
		{
			sum+=1;
			num=m-1;
			sum+=apple(num,m);
		} 
		return sum;
	}
}





int main()
{
	int t,i;

	scanf("%d",&t);

	for(i=0;i<t;i++)
	{
    int total=0;
	scanf("%d",&M);
	scanf("%d",&N);

    total=apple(N,M);

	printf("%d\n",total);
	}

	return 0;
}

	
