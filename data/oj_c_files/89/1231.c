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
 * FamousPerson.cpp
 *
 *  Created on: 2013-12-13
 *      Author: KEVIN
 */


int main()
{
	int n;
	cin>>n;
	struct{int knows,known;} person[n];
	memset(person,0,sizeof(person));
	while(1)
	{
		int i,j;
		cin>>i>>j;
		if(i==j)break;
		person[i].knows++;
		person[j].known++;
	}
	for(int i=0;i<=n-1;++i)
	{
		if(person[i].known==n-1 && person[i].knows<n-1)
		{
			cout<<i;
			break;
		}
		else
		{
			if(i==n-1)cout<<"NOT FOUND";
		}
	}
	return 0;
}