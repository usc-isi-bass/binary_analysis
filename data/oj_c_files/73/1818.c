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
 * ????.cpp
 *
 *  Created on: 2010-11-19
 *      Author: IBM
 */


int main(){
	int a[5][5];
	int i,j,k,ok,x,y,s,p=0;
	for(i=0;i<5;i++)
			for(j=0;j<5;j++)
				cin>>a[i][j];
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
		{
			ok=1;
			for(k=0;k<5;k++)
				if((a[i][k]>a[i][j])||(a[i][j]>a[k][j]))
					ok=0;
			if(ok==1)
			{
				x=i;
				y=j;
				s=a[i][j];
				p=1;
			}
		}
	if(p==0)
		cout<<"not found"<<endl;
	else
		cout<<x+1<<' '<<y+1<<' '<<s<<endl;
	return 0;
}