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
	int n;
	cin>>n;
	
	while(n--)
	{
	    //?????? ????????
		char num1[101],num2[101];
	    for(int k=0;k!=101;k++)
		    num1[k]=num2[k]='\0';
	    cin>>num1>>num2;
	    
		//???len1 len2??????????????
		int len1=0,len2=0;
	    while(num1[len1++]!='\0'){}
    	while(num2[len2++]!='\0'){}
    	len1--;
	    len2--; 
    	
		//???????????100???? ?????
		for(int k=len1-1;k>=0;k--)
    	{
	    	num1[101+k-len1]=num1[k];
		    num1[k]='\0';
	    }
	    for(int k=len2-1;k>=0;k--)
	    {    
	    	num2[101+k-len2]=num2[k];
	    	num2[k]='\0';
	    }

	    //????
		for(int k=100;num2[k]!='\0';k--)
    	{
	    	int temp=num1[k]-num2[k];   //?temp??????????
	    	if(temp<0)   //????? ??k???10+temp ?k-1????1
	    	{
		    	num1[k-1]--;
		    	num1[k]=10+temp+'0';
	    	}
	    	else   //???k???temp
		    	num1[k]=temp+'0';
    	}
	    
		//????
		int k=0;   //?k??num1??????'0'?'\0'?? ???????
	    while(num1[k]=='\0'||num1[k]=='0')
		    k++;
	    for(;k!=101;k++)
	    	cout<<num1[k];
	    cout<<endl; 
    }
	return 0;
}