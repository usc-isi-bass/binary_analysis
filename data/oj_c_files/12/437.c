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
 * 1000010175_mte9.cpp
 *
 *  Created on: 2010-11-14
 *      Author: ???
 *      function:1134 ??
 */



int main(){
	int iNum[20],i,j,n,iPair;
	while(1)
	{
		iPair=0;
		memset(iNum,0,80);
		cin>>iNum[0];
		n=1;
		if(iNum[0]==-1) break;
		do                 //??,????0???
		{
			cin>>iNum[n];
			n++;
		}while(iNum[n-1]!=0);
		n--;    //????0????

		for(i=0;i<n;i++)  //????,???????????
			for(j=0;j<n;j++)
				if(iNum[j]==iNum[i]*2)
					iPair++;
		cout<<iPair<<endl;
	}
	return 0;
}