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
	int y ,m1,m2,p;
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int n,s;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>y>>m1>>m2;a[1]=28;s=0;
		if(y%400==0||(y%4==0&&y%100!=0))  a[1]=29;
		if(m2<m1)  
		{
			p=m1;
			m1=m2;
			m2=p;
		}
		for(int j=m1;j<m2;j++)
		{
			s=s+a[j-1];
		}
		if(s%7==0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}