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
	int n,i,y;//????
	cin>>n;//?????????
	double a,b,c,d;//????
	a=0,b=0,c=0,d=0;//???a,b,c,d??
	for(i=1;i<=n;i++)
	{
		cin>>y;//??????
		if(y<=18)a=a+1;//??y<=18,a=a+1
		else if(y>=19&&y<=35)b=b+1;//??19<=y<=35,b=b+1
		else if(y>=36&&y<=60)c=c+1;//??36<=y<=60,c=c+1
		else d=d+1;//???d=d+1
	}
	cout<<"1-18: "<<fixed<<setprecision(2)<<100*a/n<<"%"<<endl;//??1-18?????
	cout<<"19-35: "<<fixed<<setprecision(2)<<100*b/n<<"%"<<endl;//??19-35?????
	cout<<"36-60: "<<fixed<<setprecision(2)<<100*c/n<<"%"<<endl;//??36-60?????
	cout<<"60??: "<<fixed<<setprecision(2)<<100*d/n<<"%"<<endl;//??60???????
	return 0;
}