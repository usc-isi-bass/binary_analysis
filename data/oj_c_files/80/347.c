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
	int y1,m1,d1,y2,m2,d2,i,s=0;
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	cin>>y1>>m1>>d1>>y2>>m2>>d2;

 if(y1!=y2)
	  {
		for(i=y1+1;i<y2;i++)
		{
			if((i%4==0&&i%100!=0)||(i%400==0)) 
			{
				s+=366;
			}
			else
			{
				s+=365;
			}
		}
		for(i=m1+1;i<=12;i++)
				s+=a[i];
		for(i=1;i<m2;i++)
				s+=a[i];
		s+=a[m1]-d1+d2;
		if(((y1% 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0))&& m1<=2)
			s++;
		if(((y2 % 4 == 0 && i % 100 != 0) || (i % 400 == 0))&& m2>2) 
			s++;
		
		cout<<s;
	  }
 else
	  {
		  if(m1!=m2)
		  {
	  
			for(i=m1+1;i<m2;i++)
				s+=a[i];
			 if((y1% 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0)&& m1<=2&&m2>2)
				 s++;
			cout<<s;
		  }
		  else
		  {
			  s=d2-d1;
		     cout<<s;
		  }
	  }
	return 0;
}


 
		
	