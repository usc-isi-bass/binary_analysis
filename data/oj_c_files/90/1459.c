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


int result;

void function(int apple,int dish,int min)
{
	if(dish==0&&apple==0)
		result++;
	if(dish==0&&apple!=0||apple==0&&dish!=0||apple<min)
		return;
	for(int k=min;k<=apple/dish;k++)
		function(apple-k,dish-1,k);
}

int main()
{
	int n;
	int apple,dish;
	cin>>n;
	while(n--)
	{
		cin>>apple>>dish;
		function(apple,dish,0);
		cout<<result<<endl;
		result=0;
	}
	return 0;
}
		