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
	struct student{
		long num;
		long chinese;
		long maths;
		long sum;
	}t[100000],l;
	long n,i,j,k,tmp;
	scanf("%ld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%ld %ld %ld",&t[i].num,&t[i].chinese,&t[i].maths);
	}
    for(i=0;i<n;i++)
	{
		t[i].sum=t[i].chinese+t[i].maths;
	}
	for(i=0;i<3;i++)
	{
        k=i;
		for(j=i+1;j<n;j++)
		{
			if(t[j].sum>t[k].sum)
				k=j;
		}
		l=t[k];
                  t[k]=t[i];
                  t[i]=l;
	}
	for(i=0;i<3;i++)
	{
	    printf("%ld %ld\n",t[i].num,t[i].sum);
	}
	return 0;
}