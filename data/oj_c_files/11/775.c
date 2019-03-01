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

int judge(int);
int main()
{
	int year,month,day,i,j,total=0;
	cin>>year>>month>>day;
	for(i=1;i<=month-1;i++)
	{
		if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10)
			total=total+31;
		else if(i==4 || i==6 || i==9 || i==11)
			total=total+30;
		else if(judge(year)==0 && i==2)
			total=total+28;
		else if(judge(year)==1 && i==2)
            total=total+29;
	}
	total=total+day;
	cout<<total<<endl;
	return 0;
}
int judge(int x)
{
	int y=0;
	if(x%4==0 && x%100!=0 || x%400==0)
		y=1;
	else
		y=0;
	return y;
}



