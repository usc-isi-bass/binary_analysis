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
	int sys2,oct=0,homo,i,j,t;    //??sys1?sys2????????????
	double sys1,length;  //?????????,??sys1?double
	char num[32];           //????????
	cin>>sys1>>num>>sys2;
	length=strlen(num);           //????????
	for(i=0;i<length;i++)          //?????????????????????
	    num[i]=(char)toupper(num[i]);
	for(i=0;i<length;i++)                //???????????
	{
		if(num[i]>=48&&num[i]<=57)
		    homo=num[i]-48;
		else 
			homo=num[i]-55;
		oct=oct+homo*pow(sys1,length-i-1);
	}
	int change[32]; 
	for(i=0;;i++)           //????????sys2???????sys2???
	{
		change[i]=oct%sys2;
		oct=oct/sys2;
		if(oct==0)
			break;
	}
	for(j=0;j<=i-j;j++)        //???????????????????
	{
		t=change[j];
		change[j]=change[i-j];
		change[i-j]=t;
	}
	char ans[32];
	for(j=0;j<=i;j++)          //??????ASCII?
	{
		if(change[j]>=10)
			ans[j]=change[j]+55;
		else
			ans[j]=change[j]+48;
		cout<<ans[j];           //??????
	}
	cout<<endl;
	return 0;
}