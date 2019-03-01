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

int main(int argc, char* argv[])
{
	int days[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	int n,y,m1,m2,i,c1,c2,j,k,cha;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		days[2]=28;
		scanf("%d %d %d",&y,&m1,&m2);
		
		if((y%4==0)&&(y%100!=0)||(y%400==0))
		{days[2]++;}
		
		c1=0;c2=0;
		
		for(j=1;j<m1;j++){
			c1=c1+days[j];}

		for(k=1;k<m2;k++){
			c2=c2+days[k];}
		
		cha=c1-c2;
		if(cha%7==0)
		printf("YES\n");
		else
		printf("NO\n");	
	}	
	return 0;
}