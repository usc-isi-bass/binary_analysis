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
	int num,countm = 0,countf = 0;
	float m[40],f[40];
	float t;
	char temp[10];
	cin>>num;
	for(int i = 0;i<num;i++)
	{
		cin>>temp;
		cin>>t;
		if(temp[0] == 'm')
		{
			m[countm] = t;
			countm++;
		}
		else
		{
			f[countf] = t;
			countf++;
		}
	}
	sort(m,m+countm);
	sort(f,f+countf);

	for(int i = 0;i<countm;i++)
	{
		printf("%.2f ",m[i]);
	}
	for(int i = countf-1;i>=0;i--)
	{
		printf("%.2f",f[i]);
		if(i != 0)
			cout<<' ';
	}
	return 0;
}