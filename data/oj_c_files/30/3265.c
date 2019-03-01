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
 * ?The number has no relative to seven?.cpp
 *
 *  Created on: 2010-11-4
 *      Author: acer
 */

int main()
{
	int Num,i,Sum=0;
	cin>>Num;
	int exam(int Num);					//??????

	for(i=0;i<=Num;i++)					//????
		if(exam(i))
			Sum+=i*i;					//????
	cout<<Sum;
	return 0;
}

int exam(int Num)						//????
{
	if(((Num%10)==7)||(((Num-Num%10)/10)==7)||(Num%7==0))
		return 0;						//??7???7?????0  ????1
	else return 1;
}
