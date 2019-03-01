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
 * 123.cpp
 *
 *  Created on: 2012-10-13
 *      Author: Administrator
 */
int main()
{
int n,i,sum=0;
cin>>n;
for(i=1;i<=n;i++)
{if(i%7!=0&&((i/10)%7!=0 && (i/10)!=0 || (i/10)==0)&&((i-(i/10)*10)%7!=0 && i%10!=0 || i%10==0))
	{sum=sum+i*i;}
}
cout<<sum<<endl;
return 0;
}
