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
 * no4.cpp
 *
 *  Created on: 2010-11-20
 *      Author: ???
 *      Title: ?????C????????
 */



int main()
{
	char str[82];		//??????
	int len,i,n,j;		//?????len??????
	cin>>n;		//??n
	cin.ignore();	//????????
	for (i=1;i<=n;i++)
	{
		memset(str,'\0',sizeof(str));	//?????
		cin.getline(str,90);	//?????
		len=strlen(str);	//???????
		if (str[0]!='_' && ( str[0]<65 || (str[0]>90 && str[0]<97) || str[0]>122))	//?????????????
		{
			cout<<0<<endl;	//????0
			continue;
		}
		for (j=1;j<len;j++)		//??????????????
		{
			if (str[j]!='_' && (str[j]<48 || (str[j]>57 && str[j]<65) || (str[j]>90 && str[j]<97) || str[j]>122))
			{
				cout<<0<<endl;	//??????0
				break;
			}
		}
		if (j==len)
			cout<<1<<endl;		//?????1
	}
	return 0;	//????
}