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
 * temp2.cpp
 *
 *  Created on: 2011-12-22
 *      Author: apple
 */
int main()
{
	int n,num[100];
         float len[100],max=0,ave,sum=0;
	cin>>n;
	for(int i=0;i<n;i++)
		{cin>>num[i];
	    sum+=num[i];
		}
	ave=sum/n;
	for(int i=0;i<n;i++)
	{
		len[i]=num[i]-ave;
		if(len[i]<0)  len[i]=0-len[i];
		if(len[i]>max)
			max=len[i];
	}
	int j=0,store[100];
	for(int i=0;i<n;i++)
		if(len[i]==max)
		{store[j]=num[i];j++;}
	int l=j,temp;
		if(l==1)cout<<store[0]<<endl;
		else {
			for(int j=0;j<l-1;j++)
				for(int i=j;i<l;i++)
					if(store[i]>store[i+1])
					{
						temp=store[i];
						store[i]=store[i+1];
						store[i+1]=temp;
					}
			cout<<store[0];
			for(int i=1;i<l;i++)
				cout<<","<<store[i];
			cout<<endl;
		}

}
