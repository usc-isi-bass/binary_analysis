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
 * hfbzf.cpp
 *
 *  Created on: 2011-12-11
 *      Author: miaomiao
 */
int main()
{
	int n;
	cin>>n;
	char a[81];
	int i,count;
	cin.ignore();//??????
	while(n--)
	{
	cin.getline(a,81);//????????
	count=0;//??
	for(i=0;a[i];i++)
	{
	if((a[0]=='_')||(a[0]>='a'&&a[0]<='z')||(a[0]>='A'&&a[0]<='Z'))//???????
	{
			if((a[i]=='_')||(a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')//????????
					||(a[i]>='0'&&a[i]<='9'))
				count++;//???????
	}
	}
	if(count==strlen(a))//????????????
		cout<<"1"<<endl;
	else
		cout<<"0"<<endl;
	}
	return 0;
}


