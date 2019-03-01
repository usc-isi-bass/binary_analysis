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
 * 2Npower.cpp
 * ?????2?N??
 *  Created on: 2013-1-11
 *      Author: ???
 */



void operate(int N);

int main()
{
	int N;               //?????
	cin>>N;              //?????
    operate(N);          //????operate
    return 0;
}

void operate(int N)
{
	int i,j;
	int num=0;
	int result[51];      //????
		memset(result,0,sizeof(result));//???
	if(N==0){
		cout<<'1';
		return  ;}
    result[50]=2;        //????
    for(i=2;i<=N;i++)
    {
        for(j=50;j>=0;j--)
        {
        	result[j]=result[j]*2+num;
        	if(result[j]>=10){
        		result[j]=result[j]-10;
        	    num=1;
        	}
        	else
        		num=0;
        }
    }
    for(i=0;i<=50;i++) //?????
    	if(result[i]!=0)
    		break;
    for(j=i;j<=50;j++) //??
    	cout<<result[j];
    return ;
}
