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
 * shuzuwenti3.cpp
 *??
 *  Created on: 2013-10-20
 *      Author: Administrator
 */
int main()
{
	int n,a[20001],i,j,b=0;
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];
	cout<<a[1];//??????
	for(i=2;i<=n;i++)
	{
		for(b=0,j=1;j<i;j++)
		{
			if(a[i]!=a[j])//??????
				b=b+1;//????????
		}
		if(b==i-1)
			cout<<" "<<a[i];//????
	}
	return 0;
}
/*
??n????n???????????????10-100???
???????????????????????????????????????????
????
???????
??????????n?1<=n<=20000??????????????????
???????????n????????????10???100?
????
???????????????????????????????????????
????
5

10 12 93 12 75
????
10 12 93 75
*/
