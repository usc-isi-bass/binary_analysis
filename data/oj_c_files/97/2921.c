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
	int sum;
	cin>>sum;
	cout<<sum/100<<endl;
	sum=sum-(sum/100)*100;
	cout<<sum/50<<endl;
	sum=sum-(sum/50)*50;
	cout<<sum/20<<endl;
	sum=sum-(sum/20)*20;
	cout<<sum/10<<endl;
	sum=sum-(sum/10)*10;
        cout<<sum/5<<endl;
	sum=sum-(sum/5)*5;
	cout<<sum;
	
	return 0;
}
