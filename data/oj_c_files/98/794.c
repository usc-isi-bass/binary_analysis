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
 * wenzipaiban.cpp
 *????
 *  Created on: 2011-12-9
 *      Author: q
 */
int main()
{
	char ch[1000][40]={0};
	char (*p)[40];//?????????
	int n,i,counter=0;//counter???????????
	p=ch;//?????
	cin>>n;
	for(i=0;i<n;i++)cin>>*p++;//??
	p=ch;//???????
	while(p<(ch+n))
	{
		if(counter==0)//?????????
		{
			counter+=strlen(*p);
			cout<<*p;
			p++;
		}
		else {
			counter+=strlen(*p)+1;//1?????
			if(counter<=80){//???80
				cout<<' '<<*p;
				p++;
			}
			else 
			{//??80??????
				counter=0;
				cout<<endl;
			}
		}
	}

	return 0;
}
