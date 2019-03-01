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
	int i,n,year,month1,month2,date=1,count1=0,count2=0,day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	cin>>n;
	while(n--)
	{
		count1=count2=0;
		cin>>year>>month1>>month2;
		for(i=1;i<month1;i++)
			count1+=day[i];
		count1+=date;
		if(month1>2)
			if((year%400==0)||((year%100!=0)&&(year%4==0)))
				count1++;
		for(i=1;i<month2;i++)
			count2+=day[i];
		count2+=date;
		if(month2>2)
			if((year%400==0)||((year%100!=0)&&(year%4==0)))
				count2++;
		if((count1-count2)%7==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}