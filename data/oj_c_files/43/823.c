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

int main ()
{
	int m;
	int tmp=0;
	cin>>m;
	for(int i = 3 ; i <= m/2 ; i++)
	{
		int count1=0;
		int count2=0;
		for(int k = 2 ; k < i ; k++)
		{
			if(i%k!=0)count1++;
		}
		if(count1<i-2)continue;
		for(int j = 2 ; j < m-i ; j++)
		{
			if((m-i)%j!=0)count2++;
		}
		if(count2==m-i-2)
		{
			tmp++;
			if(tmp==1)cout<<i<<" "<<m-i;
			else cout<<'\n'<<i<<" "<<m-i;
		}
	}
	return 0;
}
