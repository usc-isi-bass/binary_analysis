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
	int begin[1000],end[1000],i=0,j=0,sum=0,max=0,k;
	char dot=',';
	while (dot==',')
	{
		cin >> begin[i];
		i++;
		dot=cin.get();
	}
	while (cin>>end[j])
	{
		j++;
		dot=cin.get();
		if(dot!=',')
			break;
	}
	for(k=0;k<1000;k++)
	{
		for(i=0;i<j;i++)
		{
			sum+=(begin[i]==k)-(end[i]==k);
		}
		if(sum>max)
			max=sum;
	}
	
	cout << i <<" "<<max<<endl;
	return 0;
}
