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
 * ?7???????.cpp
 *
 *  Created on: 2010-11-19
 *      Author: taoshibo
 */
int main()
{
	int n,i,sum=0;//????n?????i?????sum
	cin>>n;
	int a[n+1];
	for(i=1;i<n+1;i++){//???????
		if((i%7==0)||(i%10==7)||i/10==7)//??i?7??????0
			a[i]=0;
		else a[i]=i*i;//???????????
	}
	for(i=1;i<n+1;i++)//???????
		sum=sum+a[i];
	cout<<sum<<endl;//?????
	return 0;
}
