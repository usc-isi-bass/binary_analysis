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

//============================================================================
// Name        : 131108middleExam.cpp
// Author      : 1300012854 xyz
// Version     : MiddleExam Good Luck
// Copyright   :
// Description : Hello World in C++, Ansi-style
//============================================================================
//I believe I can!!Relax!!!

int main() {
	int a,b,c,d,e;//????a-e???
	for(a=1;a<=5;a++)
	for(b=1;b<=5;b++)
	{
		if(a==b)
			continue;
	for(c=1;c<=5;c++)
	{
		if(a==c||b==c)
			continue;
	for(d=1;d<=5;d++)
	{
		if(a==d||b==d||c==d)
			continue;//???????a-d?????????
		e=15-a-b-c-d;//??????a-e??15?????????????????????e
		if(e==2 || e==3)
			continue;//????e??23?
		if((e==1)+(a==1||a==2)!=1)//????????????????????????????????????????????1
		if((b==2)+(b==1||b==2)!=1)
		if((a==5)+(c==1||c==2)!=1)
		if((c!=1)+(d==1||d==2)!=1)
		if((d==1)+(e==1||e==2)!=1)
		{
			cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e<<endl;//???????????????????
			return 0;
		}
	}
	}
	}
	return 0;
}