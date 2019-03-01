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
	int a1[128],a2[128],i;
	char t1[1000],t2[1000];
	cin>>t1>>t2;
	for(i=0;i<128;i++)
		a1[i]=a2[i]=0;
	i=0;
	while(t1[i]&&t2[i])
	{
		a1[t1[i]]++;
		a2[t2[i]]++;
		i++;
	}
	if(t1[i]||t2[i])cout<<"NO";
	else
	{
		for(i=0;i<128;i++)
			if(a1[i]!=a2[i])
			{
				cout<<"NO";
				break;
			}
		if(i==128)cout<<"YES";
	}
	return 0;
}