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
  Name: ????????????
  Copyright: 
  Author: 
  Date: 07/12/12 12:44
  Description:??????????????????????????????????????????????????? 
?????80??????????????????????????????????????????? 
????????????  
*/
//?????? 
int main()
{
	char a[1000][45],*p=NULL; 
	int n,i,count=0;
	cin>>n;
	for(i=0;i<n;i++) 
	{
        //??
		cin>>a[i];
		//cout<<*p<<endl; 
	} 
	//for(i=0;i<n;i++)
     //  cout<<a[i]<<endl; 
    count=strlen(a[0]);
	   cout<<a[0];
	for(i=1;i<n;i++)
	{
		count=count+strlen(a[i])+1;
		if(count<=80)
		{
			cout<<" "<<a[i];
		}
		else
		{
			count=strlen(a[i]);
			cout<<endl;
			cout<<a[i];
		}
	}



	return 0;
}