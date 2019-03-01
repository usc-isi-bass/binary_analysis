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
	int n,a1=0,a19=0,a36=0,a61=0,a;
	cin>>n;//?????
	for(int i=1;i<=n;i++)//???????
	{
		cin>>a;
		if (a<=18) a1++;//??????????
		else
		{
			if(a<=35) a19++;
			else
			{
				if(a<=60) a36++;
				else a61++;
			}
		}
	}
	printf("1-18: %.2f%%\n19-35: %.2f%%\n36-60: %.2f%%\n60??: %.2f%%\n",((float)a1)/n*100,((float)a19)/n*100,((float)a36)/n*100,((float)a61)/n*100);
	//?????
	return 0;
}