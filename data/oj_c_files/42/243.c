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
 * 00948344_25.cpp
 * ????????????????????
 * Created on: 2010-10-30
 * Author: 00948344 ??
 */

int main(){
	int n;                //??????????
	cin>>n;
	int *p=(int*)malloc(n*sizeof(int));   //????
	int i;                     
	for(i=0;i<n;i++)                      //???????
	cin>>p[i];
	int k;                                //?????????
	cin>>k;
	for(i=0;i<n;i++)                     //????????????????????????????
		if(p[i]==k)
		{
			n--;                         //?????
			for(int j=i;j<n;j++)
		            p[j]=p[j+1];
			i--;
		}
    if(n==0)                             //????????????none
    	cout<<"none";
    else                                 //?????????????
    {
    	cout<<p[0];
    	for(i=1;i<n;i++)
    	cout<<' '<<p[i];
    }
    free(p);                             
    return 0;                            //????
}
