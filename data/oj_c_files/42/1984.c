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

//**************************
//*???????????  **
//*?????? 1300012863 **
//*???2013.11.1        **
//**************************
int main()  
{ 
	int n,i,k,j,t;
	int a[100020];                   //????
	cin>>n;                         //?????????
	t = n;
	for(i=1;i<=n;i++)               //???????????
	{
		cin>>a[i];
	}
	cin>>k;                         //???????
	for(i=1;i<=t;i++)               //?????????????????
	{
		if(a[i]==k)                 //?????
		{
			t--;      
			for(j=i;j<=t;j++)       //????????????
			{
				a[j] = a[j+1];
			}
			i--;
		}
	}
	for(int m =1;m<=(t-1);m++)     //????
	{
		cout<<a[m]<<" ";
	}
	cout<<a[t];
	return 0;
}