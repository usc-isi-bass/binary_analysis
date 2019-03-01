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

//********************************
//*??????????? **
//*????? 1300012839 **
//*???2013.10.31**
//********************************
int main()
{
	int a[100000];
	int i,j,n,out,count = 0,flag = -1;                 //i,j??????out??????,??flag????
	cin >> n;                                          //?????n
	for(i = 0;i < n;i++)
		cin >> a[i];                                   //?????
	cin >> out;                  
	for(i=0;i < n;i++)
	{
		if(a[i] != out)
	    {
			count = count+1;                          //????out?????
		    flag = i;                                 //flag???????out?????
		}
	}
	for(j = 0;j < flag;j++)
		if(a[j] != out)cout << a[j] << " ";          //????count-1?????
	if(flag!=-1)cout << a[flag]<< endl;              //?flag?=-1??????????out??????????????????
	return 0;
}