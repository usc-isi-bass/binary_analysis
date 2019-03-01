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
 * ????cout.cpp
 * ?????
 * ????: 2011-10-21
 * ???????????
 */
int main(){
	int n,i,j,k,l=1;//??????????????????
	cin>>n;//?????????
	int a[20000];//????
	for (i=0;i<n;i++)cin>>a[i];//??????
	for (i=0;i<n;i++)
	{
		int flag=0;
		for (j=0;j<i;j++)
		      {if(a[i]==a[j])//?????????
		   	   {
					  flag=1;
					  break;
	              }
		      }
		if (!flag) {cout<<a[i];break;}
	}
	i++;
	for (;i<n;i++)
	{
		int flag=0;
		for (j=0;j<i;j++)
	       {if(a[i]==a[j])//?????????
	    	   {
					  flag=1;
					  break;
               }
	       }
		if (!flag) cout<<' '<<a[i];
	}
    return 0;//????
}

