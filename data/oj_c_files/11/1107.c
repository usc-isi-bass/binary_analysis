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
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int year,month,day,i,k,sum=0;
	cin>>year>>month>>day;
	if (year%400==0)  //????
		k=1;
	else if (year%100==0)
		k=0;
	else if (year%4==0)
		k=1;
	else
		k=0;
	if (k==1)
		a[1]=29;
	for (i=0;i<month-1;i++)
		sum+=a[i];
	sum+=day;
	cout<<sum<<endl;
	return 0;
}