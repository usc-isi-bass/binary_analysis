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
	int i,y,l_y,l_y1,m,d,t=0,w;
	int m_p[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int r_p[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	char week[7][10]={"Mon.","Tue.","Wed.","Thu.","Fri.","Sat.","Sun."};
	cin>>y>>m>>d;
	while(y>400)
	{
		y=y-400;
	}
	/*cout<<y<<" ";*/
	l_y1=((y%4==0)&&(y%100!=0)||(y%400==0));
	while(y>1)
	{
		y--;
		l_y=((y%4==0)&&(y%100!=0)||(y%400==0));
		if(l_y==0)
			t=t+365;
		else
			t=t+366;
		/*cout<<t<<" ";*/
	}
	if (l_y1==0)
		for(i=0;i<m-1;i++)
			t=t+m_p[i];
	else
		for(i=0;i<m-1;i++)
			t=t+r_p[i];
	/*cout<<t<<" ";*/
	t=t+d-1;
	/*cout<<t<<" ";*/
	w=t%7;
	cout<<week[w]<<endl;
	return 0;
}