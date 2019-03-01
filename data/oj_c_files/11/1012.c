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
	int year,month,day,num=0;
	int Ping[12]={0,31,28,31,30,31,30,31,31,30,31,30};
	cin>>year;
	if( year%4 != 0 || ( year%100 == 0 && year%400 != 0 ) )
	{
		;
	}
	else
	{
		Ping[2]++;
	}
	cin>>month>>day;
	for( int i=0 ; i<month ; i++ )
	{
		num+=Ping[i];
	}
	cout<<num+day<<endl;
}