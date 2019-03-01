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
	int leap,year,month,day,sum=0;
	int a[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31,},{31,29,31,30,31,30,31,31,30,31,30,31}};
	cin>>year>>month>>day;
	leap=((year%400==0)||(year%100!=0 && year%4==0));
	for (int i=0;i<month-1;i++)
	   sum=sum+a[leap][i];
	sum=sum+day;
	cout<<sum<<endl;
	return 0;

}
