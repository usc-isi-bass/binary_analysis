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
 * ????huiwenzichuan.cpp
 * ?????
 * ????: 2011-12-28
 * ???????
 */
int main(){
	char a[500];//????
	unsigned int i,j,k,l;//????
	cin>>a;//?????
	for(k=2;k<strlen(a)+1;k++)//????
	{
		for(i=0;i<strlen(a)-k+1;i++)//??
		{
			for(j=i;j<i+k;j++)//???????
			{
				if(a[j]!=a[2*i+k-1-j])break;//?????????????
				else if(j>=2*i+k-1-j){for(l=i;l<i+k;l++)cout<<a[l];cout<<endl;break;}//?????????
			}
		}
	}
	return 0;//????
}

