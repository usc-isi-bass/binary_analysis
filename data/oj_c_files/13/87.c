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

/************************
???????????
???:???
*********************/
int main ()
{
	int a[20000],n,i,j;              //????n,i,j,n?????????a[20000]???
	cin>>n;                             //??n
	for(i=0;i<n;i++)            //??????
		cin>>a[i];                //??a[i]
	for(i=0;i<n;i++)                   //????
	{
		for(j=n-1;j>i;j--)
		{
			if( a[j]==a[i])               //????,??a[j]=a[i]?a[j]=-1
		a[j]=-1;
		}
	}
	cout<<a[0];                         //??a[0]
	for(i=1;i<n;i++)            //????
	if(a[i]!=-1)
		cout<<" "<<a[i];         //??a[i]?????????????a[i]
	return 0;
}