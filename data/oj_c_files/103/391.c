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
	char a[1000];
	int num[1000] = {0},i,j,len;
	cin>>a;
	len = strlen(a);
	for(i = 0;i < len ;i ++)
	{
		if(a[i] > 'Z')
		{
			a[i] = a[i] - 'a' + 'A';
		}
	}
	for(i =0; i < len ;i ++)
	{
		j = i;
		while(a[j] == a[i])
		{
			j ++;
			num[i] ++;
		}
		cout<<"("<<a[i]<<","<<num[i]<<")";
		i = j - 1;
	}
	return 0;
}