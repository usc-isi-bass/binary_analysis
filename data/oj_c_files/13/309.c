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
 *  1000012850_26.cpp
 *  ???????????
 *  Created on: 2010-10-29
 *  Author: William
 */
int main()                         //???
{                                  //?????
	int n,num;                   //??????n num b
	cin>>n;                        //??n
	int a[n];                      //??????a[n]
	for(num=0;num<=(n-1);num++)    //for??
	{
		cin>>a[num];
	}                              //??????????? ??????????n?????
    int i,k,q;                     //??????i k q
    cout<<a[0];                    //??a[0]
    for(k=1;k<=n-1;k++)            //for?? ????a[k]???????????
    {
    	q=0;                       //q??0
    	for(i=0;i<k;i++)           //for??
    	{
    		if(a[k]==a[i]){
    		q++;
    		}                      //???????? ??q??
    	}
    	if(q==0)                   //??q?0 ??????a[k]
    	{
    	cout<<" "<<a[k];
    	}
    	}
return 0;                          //??
    }                              //??
