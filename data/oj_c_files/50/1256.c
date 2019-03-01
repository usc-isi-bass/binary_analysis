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
	int a[13]={0,6,2,2,5,0,3,5,1,4,6,2,4};
	int i,w;
	int b[8]={0,5,4,3,2,1,0,6};
	cin>>w;
	for(i=1;i<=12;i++)
	{
		if(a[i]==b[w])
			cout<<i<<endl;
	}
	return 0;
}


