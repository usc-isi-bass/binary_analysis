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
	char a[1000][50];//???????????????????
	int n,i;
	cin >> n;
	for(i=0;i<n;i++)
		cin >> *(a+i);
	long sum=0;//sum?????????
	for(i=0;i<n;i++)
	{
		if(sum+strlen(*(a+i))+1>80)//??????????
		{
			cout << endl << *(a+i);
			sum=strlen(*(a+i));
			continue;
		}
		sum+=strlen(*(a+i))+1;
		if(i==0)//????????????
		{
			cout << *(a+i);
			sum--;
			continue;
		}
		cout << ' '<< *(a+i);//????????
	}
	return 0;
}