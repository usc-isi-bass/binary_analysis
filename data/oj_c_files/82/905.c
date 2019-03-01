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

int main (){
	int i,k[101] ,n,a,b,sum,j;
	k[0] =0;
	sum =0;
	cin >>n;
	i=1;
	for(i=1;i<=n;i=i+1)
	{
		cin >> a >> b;
	if (a>=90 &&a<=140&&b>=60&&b<=90)
		k[i] =k[i-1] +1;
	else k[i] =0;

	}
	for(j=1;j<=n;j++)
	{
		if (k[j]>=sum)
			sum =k[j];

	}
	cout << sum <<endl;
	return 0;

}