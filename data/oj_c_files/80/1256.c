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
	int year,month,day;
	int total[3],m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int j=2;
	while(j--)
	{
		cin>>year>>month>>day;
		total[j]=0;
		for(int i=1;i<year;i++)
			{
				if(i%4==0&&i%100!=0||i%400==0)
					{
						total[j]+=366;					}
				else
					{
						total[j]+=365;
					}
			}
		for(int i=1;i<month;i++)
		{
			total[j]+=m[i];
		}
		total[j]+=day;
		if(year%4==0&&year%100!=0||year%400==0)
			{
				if(month>2)
					{
						total[j]++;
					}
			}
	}
	cout<<total[0]-total[1]<<endl;
	return 0;
 }