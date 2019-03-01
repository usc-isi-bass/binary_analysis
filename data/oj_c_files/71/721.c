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
 * 12.11.2.cpp
 *Created on: 2012-11-2
 *Author:???
 *?? ????
 */
int judge(int y){
	if(y%400==0||y%4==0&&y%100!=0){
		return 1;
	}
	else return 0;
}
int main() {
	int n,y,m1,m2,num,i,j,t;
	int m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>y>>m1>>m2;
		if(m1>m2){
			t=m1;m1=m2;m2=t;
		}
		for(j=m1,num=0;j<m2;j++){
			num=num+m[j]+(j==2)*judge(y);
		}
		if(num%7==0)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}