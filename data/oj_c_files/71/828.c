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
	int n,m,a,b,c;
	cin>>n;
	for(int i=0;i<n;i++)
		{cin>>m>>a>>b;
	     c=0;
	    if(a<b)
			for(int j=a;j<b;j++)
				{if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
				 {c=c+31;}
				else  if(j==4||j==6||j==9||j==11)
				       {c=c+30;}
				       else if(j==2&&(m%4==0&&m%100!=0)||m%400==0)
					   {c=c+29;}
					   else
			             c=c+28;}
				
		else
			for(int j=b;j<a;j++)
				{if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
				       {c=c+31;}
				else  if(j==4||j==6||j==9||j==11)
				         {c=c+30;}
				      else if(j==2&&(m%4==0&&m%100!=0)||m%400==0)
					  {c=c+29;}
					  else
			             c=c+28;}
				
		if(c%7==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;}
		return 0;
}