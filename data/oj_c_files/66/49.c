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


int days(int n)
{
	int i,sum=0;
	for(i=1;i<n;i++)
	{
		if(i%4==0&&i%100!=0||i%400==0)
		sum=sum+2;       //366%7==2,????????????
		else sum++;      //??,365%7==1,?????1   
	}
	return sum;
}
int main()
{
    int y,m,d,i,totaldays=0;
		int w;
	int k[12]={31,28,31,30,31,30,31,31,30,31,30,31};

	scanf("%d%d%d",&y,&m,&d);
	if(y%4==0&&y%100!=0||y%400==0)k[1]=29;
	y %= 400;
	if (y == 0) y = 400;
	for(i=0;i<m-1;i++)
		{
			totaldays=totaldays+k[i];
		}
		totaldays=totaldays+d+days(y);

		w=totaldays%7;
		switch(w)
		{
			  case 0:  
				   printf("Sun.");  
				   break;  
			  case 1:  
				   printf("Mon.");  
				   break;  
			  case 2:  
				   printf("Tue.");  
				   break;  
			  case 3:  
				   printf("Wed.");  
				   break;  
			case 4:  
				  printf("Thu.");   
					break;  
			case 5:  
				  printf("Fri.");   
					break;  
			case 6:  
				  printf("Sat.");   
					break;  
		}
	return 0;
}