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
 * ????10.20.cpp
 * ?????
 * ????: 2011-10-20
 * ???????????
 */
int main(){
	int n,i=0,j,k,t;//????????????????????
	cin>>n;//?????????
	t=n;//???????n
	int a[100000];//????
	for (i=0;i<n;i++)
		cin>>a[i];//??????
	int m;//???????
	cin>>m;//???????
	i=0;
	while (i<=t)
	{j=i;
	    while (a[j]==m)//??????????
	    {j++;t--;}//????1
	    if (j-i)
	    {
		    for (k=i;k<n-(j-i);k++)
			a[k]=a[k+j-i]; //?????m?????k?
		    i=j;
        }
	    else i++;//?????
	}
	for (i=0;i<t-1;i++)
		cout<<a[i]<<' ';//?????
	cout<<a[t-1];//???????
    return 0;//????
}