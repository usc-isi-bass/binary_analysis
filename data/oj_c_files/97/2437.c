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
	int n,i;
	int a[6]={100,50,20,10,5,1},b[6]={0};
	cin>>n;
	for(i=0;i<6;i++)
	{
		b[i]=n/a[i];
		n=n%a[i];
		cout<<b[i]<<endl;
	}
	return 0;
}