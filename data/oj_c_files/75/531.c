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

/*
 * ?????????
 *  ????: 2010-12-19
 *    ??????
 */

int main(){int a[1000];
int b[1000]; //????????????????????????
char str; //???????????????????????
int n = 0;
while (1)
{
cin >> a[n];
str = getchar(); //????????????????????
if (str == '\n') //?????????????????
break;
n ++;
}
n=0;
while (1)
{
cin >> b[n]; //????????????????????
str = getchar();
if (str == '\n') //?????????????????
break;
n++; //k????????
}
int min=10000,max=0,imax=0;
		for(int i=0;i<=n;i++){
			if(a[i]<=min)
				min=a[i];
			if(b[i]>max)
				max=b[i];
			}
		for(int i=min;i<=max;i++){
		int temp=0;
		for(int k=0;k<=n;k++)
			if((a[k]<=i)&&(b[k]>i))
				temp++;
		if(temp>imax)
			imax=temp;
	}
	 cout<<n+1<<' '<<imax;
	return 0;
}