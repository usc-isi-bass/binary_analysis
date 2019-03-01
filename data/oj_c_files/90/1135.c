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
 * ParallelResistance.cpp
 *
 *  Created on: 2011-9-21
 *      Author: 1100012959
 */

int sol(int apple,int plate)//?????????
{
	int solution;//???????
	if(plate==1||apple==0)//??????????1?????0
		solution=1;//??????
	else if(apple>=plate)//???????????
	{
		solution=sol(apple-plate,plate)+sol(apple,plate-1);//????????????????????
	}
	else if(apple<plate) solution=sol(apple,plate-1);//?????????????????
	return solution;
}
int main()
{
	int n,apple,plate,solution;
	cin>>n;
	for(;n>0;n--)//????
	{
		cin>>apple>>plate;
		solution=sol(apple,plate);
		cout<<solution<<endl;
	}
	return 0;
}