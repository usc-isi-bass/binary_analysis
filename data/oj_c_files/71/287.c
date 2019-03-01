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

void main()
{
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
 int n,k,i,year,mon1,mon2,day1,day2,day,temp;
 scanf("%d",&n);
 for(k=0;k<n;k++)
 {
	 day1=day2=0;
	 scanf("%d%d%d",&year,&mon1,&mon2);
	 if(mon1>mon2)
	 {
		 temp=mon1;
	     mon1=mon2;
	     mon2=temp;
	 }
	 for(i=0;i<mon1-1;i++)
		 day1=day1+a[i];
	 for(i=0;i<mon2-1;i++)
		 day2=day2+a[i];
	 if((year%4==0&&year%100!=0)||year%400==0)
	 {
		 if(mon1>2)
			 day1++;
		 if(mon2>2)
			 day2++;
	 }
	 day=day2-day1;
	 if(day%7==0)
		 printf("YES\n");
	 else
		 printf("NO\n");
 }

}