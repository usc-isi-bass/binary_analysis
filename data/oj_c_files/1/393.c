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

int s=0,z=2;//?????? z?? ??????? 
void number(int x,int y)
{    //???? 
    int i;
	if(x==1) 
	{
		s=s+1;
	}//????1? ???? s+1
	for(i=y;i<=x;i++)
	{
		if(x%i==0) 
		{ 
			number(x/i , i);
		}//?????? 
	}


}
int main()
{
	int n,a,i;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a;
		number(a,z);
		cout<<s<<endl;//???? 
		s=0;//S?0
	}
}
