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
	int year,month,day,c,days=0,i;
	int M[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31},{31,29,31,30,31,30,31,31,30,31,30,31}};
	cin>>year>>month>>day;
	if((year%4==0&&year%100!=0)||(year%400==0))
		c=1;
	else 
		c=0;
	if(month==1)
		cout<<day;
	else
	{
		for(i=0;i<month-1;i++)
		   days+=M[c][i];
		cout<<days+day;
	}
	return 0;
}