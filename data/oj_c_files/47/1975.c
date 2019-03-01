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

int i=0;//???????????????
int num=1;
void nixu(int n)
{
	
	
	int a;
	cin>>a;
	i++;
	if(i!=n)
	{
		nixu(n);
	}
	if(num!=n)
	{
	cout<<a<<' ';
         num++;
	}
	else
	{
		cout<<a;
	}
		
	

}
int main()
{
	int n;
	cin>>n;
	getchar();
	nixu(n);
	return 0;
}

