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
 * 1.cpp
 *
 *  Created on: 2011-12-19
 *      Author: 1100012870
 */
int main()
{
	int i,j,n,m,time,num,x,y;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>m;
		time=0;
		num=0;
		x=0;
		for(j=1;j<=m;j++){
			cin>>x;
			num=x;
			if(x+time>=60){
				break;
			}else{
				time+=3;
				if(x+time>=60){
					time=60-x;
					break;
				}
			}
		}
		for(int k=j+1;k<=m;k++)cin>>y;
		num+=60-(x+time);
		cout<<num<<endl;
	}
	return 0;
}