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
	int n;
	cin>>n;
	int result[6];
	int money[6]={100,50,20,10,5,1};
	for(int k=0;k!=6;k++)
	{
		result[k]=n/money[k];
		n-=n/money[k]*money[k];
	}
	for(int k=0;k!=6;k++)
		cout<<result[k]<<endl;
	return 0;
}