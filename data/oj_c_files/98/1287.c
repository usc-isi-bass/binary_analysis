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
 * ???1.cpp
 * Created on: 2012-12-11
 * Author: ???
 * ??: ????????????
 */
int main(){
	int a=0;           //??????
	int n,i,*sum=&a,len1,len2;      //????
	cin>>n; //??n
	char str[n][50];   //????
	for(i=0;i<n;i++)   //??????
	{
       cin>>str[i];
	}
	i=0;
	while(i<n-1)        //??????
	{
		len1=strlen(str[i]);        //??????
		len2=strlen(str[i+1]);      //???????
	    if(*sum+len1<=80 && *sum+len1+len2+1<=80) //??????????
	     {
	      cout<<str[i]<<" ";      //???????
		  *sum=*sum+len1+1;       //????
	     }
	    else if(*sum+len1<=80 && *sum+len1+len2+1>80)  //??????
	    {
	    	cout<<str[i]<<endl;     //???????
	    	*sum=0;      //???0
	    }
	    i++; //?i?1
	}
	len1=strlen(str[n-1]); //?????????
	if(*sum+len1>80)      //
	{
		cout<<endl;
		cout<<str[n-1];
	}
	if(*sum+len1<=80)
	{
		cout<<str[n-1];
	}
return 0;           //????
}
