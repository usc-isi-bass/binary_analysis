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

int year(int y);
void main()
{
	int i,m1,m2,n,c,s,y;
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31},
		b[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	scanf("%d",&n);
	while(n--){
		scanf("%d%d%d",&y,&m1,&m2);
		if(m1>m2){
			c=m1;
			m1=m2;
			m2=c;
		}
		s=0;
		if(year(y))
			for(i=m1-1;i<m2-1;i++)
				s+=b[i];
		else
			for(i=m1-1;i<m2-1;i++)
				s+=a[i];
		if(s%7)
			printf("NO\n");
		else
			printf("YES\n");
	}
}
int year(int y)
{
	if(!(y%4)&&y%100)
		return 1;
	if(!(y%400))
		return 1;
	return 0;
}