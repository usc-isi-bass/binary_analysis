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

//????????
//1000012915???
int reverse(int num);

int main()
{
	int Number,i,NUM[7];
	
	for(i=0;i<6;i++)
	{
		cin>>Number;
		NUM[i]=reverse(Number);
	}

	for(i=0;i<6;i++)cout<<NUM[i]<<endl;

	return 0;
}

int reverse(int num)
{
	int i=0;
	while(num!=0)
	{
		i=i*10+num%10;
		num=num/10;
	};
	return i;

}