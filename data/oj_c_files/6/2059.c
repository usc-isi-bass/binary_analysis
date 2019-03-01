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
 * T7.cpp
 *
 *  Created on: 2012-12-10
 *      Author: weiwan
 *      Function:??????????
 */

int main()
{
	int k,m,n,i,j,z,sum,temp;    //i,j,z,temp??????sum??
	int a[101][101];
	int (*p)[101] = a;
	cin >>k;       //??????
	for (i = 0;i < k;i ++)
	{
		sum = 0;
		cin >>m >>n;    //????
		for (j = 0;j < m;j ++)     //?????
			for (z = 0;z < n;z ++)
				cin >>*(*(p+j)+z);
		if(m != 1 && n != 1)
		{
			for(temp = 0;temp < n;temp ++)    //?????????????
			    sum += (*(*(p)+temp)+*(*(p+m-1)+temp));
		    for (temp = 0;temp < m;temp ++)   //?????????????
			    sum += (*(*(p+temp))+*(*(p+temp)+n-1));
		    sum -= *(*(p))+*(*(p)+n-1)+*(*(p+m-1))+*(*(p+m-1)+n-1);   //?????
		    cout <<sum <<endl;     //???
		}
		else cout <<*(*(p)) <<endl;    //??????????????
	}
	return 0;
}