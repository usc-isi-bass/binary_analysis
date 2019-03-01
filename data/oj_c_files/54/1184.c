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
 * ???2.cpp
 * Created on: 2012-11-9
 * Author: ???
 * ??:?????
 */
int main(){
	int k,n,m,i,t=0;     //????
	cin>>n>>k;      //??n k
	int x[n+1];    //????
	for(x[n]=1;;x[n]++)
	{
	   t=0;
	   for(i=n-1;i>=0;i--)    //????
	   {
		 if((x[i+1]*n)%(n-1)!=0) break;
		 else {x[i]=(x[i+1]*n)/(n-1)+k;
		       t=t+1;}//??????????
		}
	   if(t==n) break;
    }
	m=x[0];       //??m
    cout<<m;      //??m
return 0;    //????
}
