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
	int n,i,y,m1,m2,k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d%d",&y,&m1,&m2);
		k=cmp(y,m1,m2);
		if(k) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
int cmp(int y,int m1,int m2)
{
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int i,s=0,t1,t2;
	if(((y%4==0)&&(y%100)!=0)||y%400==0)
		a[1]=29;
	t1=(m1>m2? m1:m2);
	t2=(m1>m2? m2:m1);
	for(i=t2;i<t1;i++)
	    s+=a[i-1];
	return(s%7==0? 1:0);
}