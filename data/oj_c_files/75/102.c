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
	int in[1000],out[1000],result=0,num=1,i,j,k,t[1000]={0};
	char x='0';
    for (i=0;;i++)
    {  
		cin >> in[i];
		x=cin.get();
		if (x=='\n')
		{
			break;
		}
		num=num+1;
	}
	x='0';
    for (i=0;;i++)
	{
	    cin >> out[i];
		x=cin.get();
		if (x=='\n')
		{
			break;
		}
	}
	for (j=0;j<=num-1;j++)
	{
		for (k=in[j];k<out[j];k++)
		{
			t[k]++;
		}
	}
	result=0;
	for (i=0;i<1000;i++)
	{
		if (t[i]>result)
		{
			result=t[i];
		}
	}
	cout << num << " " << result << endl;
	return 0;
}