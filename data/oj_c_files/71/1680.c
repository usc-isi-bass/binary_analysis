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

int main()
{
	int n,i,j,k=0,year[201],month[201][2],b[13];
	cin>>n;
	for(i=0;i<n;i++)
	{	cin>>year[i]>>month[i][0]>>month[i][1]; //???????
	    if(month[i][0]>month[i][1])
		{	j=month[i][0];
		    month[i][0]=month[i][1];
			month[i][1]=j;   //?????????
		}
	}
	b[1]=b[3]=b[5]=b[7]=b[8]=b[10]=b[12]=31;
	b[4]=b[6]=b[9]=b[11]=30;   //??????
	for(i=0;i<n;i++)
	{
		b[2]=28;
		if((year[i]%400==0)||((year[i]%100!=0)&&(year[i]%4==0)))
			b[2]+=1;	  //????????
		for(j=month[i][0];j<month[i][1];j++) 
			k+=b[j];     //????????????
		if(k%7==0)
			cout<<"YES"<<endl;                                                   
		else         
			cout<<"NO"<<endl;
		k=0;
	}
	return 0;
}