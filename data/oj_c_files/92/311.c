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

int tian[1000], qiw[1000];
int n;
int main()
{
	while(cin>>n && n)
	{
		for(int i = 0;i < n;i ++)
			cin>>tian[i];
		for(int i = 0;i < n;i ++)
			cin>>qiw[i];
		sort(tian,tian + n);
		sort(qiw, qiw + n);
		int ti, tj, qi, qj;
		ti = qi = 0;
		tj = qj = n - 1;
		int sum = 0;
		for(int i = 0;i < n;i ++)
		{
			if(tian[ti] < qiw[qi])
			{
				sum -= 200;
				ti ++;
				qj --;
			}
			else if(tian[ti] > qiw[qi])
			{
				sum += 200;
				ti ++;
				qi ++;
			}
			else if(tian[tj] < qiw[qj])
			{
				sum -= 200;
				ti ++;
				qj --;
			}
			else if(tian[tj] > qiw[qj])
			{
				sum += 200;
				tj --;
				qj --;
			}
			else
			{
				if(tian[ti] > qiw[qj])
					sum += 200;
				else if(tian[ti] < qiw[qj])
					sum -= 200;
				ti ++;
				qj --;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}