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
	int a[30],count=0,n,temp,i;
	cin>>n;
	while(n--)
	{
		cin>>temp;
		for(i=0;i<count;i++)if(temp>a[i]){a[i]=temp;break;}
		if(i>=count){a[i]=temp;count++;}
	}
	cout<<count<<endl;
	return 0;
}