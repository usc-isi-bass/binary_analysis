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
{  int year,month,day,i,sum=0;
int DaysOfMonth[2][13]={0,31,28,31,30,31,30,31,31,30,31,30,31,0,31,29,31,30,31,30,31,31,30,31,30,31};
int flag;
cin>>year>>month>>day;
if(  year%4!=0|| (  year%4==0&& year%100==0&& year%400!=0  )  )
	flag=0;
else flag=1;
if(month==1)
	cout<<day<<endl;
else
{
	for(i=1;i<month;i++)
	{
		sum+=DaysOfMonth[flag][i];
	}
	sum+=day;
cout<<sum<<endl;
}
return 0;
}





