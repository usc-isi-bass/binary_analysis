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
	int n, i, j, year, month1, month2;
	cin>>n;
	int commonyear[]={0,0,3,3,6,1,4,6,2,5,0,3,5}, 
		leapyear[]={0,0,3,4,0,2,5,0,3,6,1,4,6};
	for (i=0;i<n;i++)
	{
		cin>>year>>month1>>month2;
		if ((year%4==0&&year%100!=0)||(year%400==0)) 
		{
			if (leapyear[month1]==leapyear[month2]) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;		
		}
		else 
		{
			if (commonyear[month1]==commonyear[month2]) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;		
		}
	}
	return 0;
}