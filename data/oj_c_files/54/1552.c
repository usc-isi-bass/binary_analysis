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
	int n,k,m=0;
	cin>>n>>k;
    int temp=n-1;
	for (int i=1;;)
	{
		m=i*n+k;
		while (m%(n-1)==0)
		{
			m=m/(n-1)*n+k;
			temp--;
			if (temp==0)
			{
				cout<<m;
				break;
			}
		}
		if (temp==0)
			break;
		i++;
		temp=n-1;
	}
	return 0;
}