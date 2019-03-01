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
 * palindrome substring.cpp
 *
 *  Created on: 2011-12-28
 *      Author: Administrator
 */
int main()
{
	char sen[510];int j,n,k,m,length;//????
	cin.getline(sen,510);
	length=strlen(sen);
	for(n=1;n<=length;n++)//?????????
		for(j=0;j<=length-1-n;j++)//?????????
		{
			m=j;
			k=j+n;
			while(k>=m&&sen[k]==sen[m])//???????
			{
				k--;m++;
			}
			if(k<=m)
			{
				for(k=j;k<=j+n;k++){cout<<sen[k];}cout<<endl;//????
			}
		}
	return 0;
}
