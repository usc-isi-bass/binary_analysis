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
	 int a,b,c,d=0;//??????a,b,c,d
	 for (a=1;a<=5;a++)//?a<=5??????????????a+1
		 for(b=1;b<=5;b++)//?b<=5?????????????b+1
			 for(c=1;c<=5;c++)//?c<=5?????????????c+1
				 for(d=1;d<=5;d++)//?d<=5?????????????d+1
					 if(a+b==c+d && a+d>b+c &&a+c<b)//??????????????????
					 {
						 for(int i=1;i<=4;i++)//??????
						 {
							 int max=0,p=0;//?????????max???0
							 if (a>b){max=a;p=1;}
							 else {max=b;p=2;}
							 if (c>max){max=c;p=3;}
							 if (d>max){max=d;p=4;}//?????????
							 switch (p)
							 {
							 case 1: {cout<<"z "<<max*10<<endl;a=0;break;}
							 case 2: {cout<<"q "<<max*10<<endl;b=0;break;}
							 case 3: {cout<<"s "<<max*10<<endl;c=0;break;}
							 case 4: {cout<<"l "<<max*10<<endl;d=0;break;}
							 }
						 }
						 return 0;
					 }
	return 0;
}