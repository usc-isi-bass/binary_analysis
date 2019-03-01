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
	int n;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		int m;
		cin>>m;
		int time=60;
		int temp;
		for (int i=0;i<m;i++)
		{
			cin>>temp;
			if (time-3>=temp)
				time-=3;
			else if (time-3<temp&&time>temp) time=temp;
		}
		cout<<time<<endl;
	}
	return 0;
}
