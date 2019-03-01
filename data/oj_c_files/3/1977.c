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
	int n,k;
	int a[1000];
	cin >>n>>k;
	int i,j;
	for (i=0;i<n;i++)
	{
		cin >>a[i];
		for (j=0;j<i;j++)//?????????????????????????
			if (a[i]+a[j]==k)
			{
				cout <<"yes";
				return 0;//?????????
			}
	}
	cout <<"no";//???????????
	
	return 0;
}