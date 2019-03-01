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

int jiaogu(int a)                             //????jiaogu
{
	if(a%2==0&&a!=0)                          //??a?????????2???????
	{cout<<a<<"/"<<"2"<<"="<<a/2<<endl;
	 return jiaogu(a/2);}
	else if(a%2==1&&a!=1)                     //??a?????????3??????????
	{cout<<a<<"*"<<"3"<<"+"<<"1"<<"="<<(a*3)+1<<endl;
	return jiaogu(a*3+1);}
	else if(a==1)                             //???1?????
	{cout<<"End"<<endl;
	 return 0;}

}
int main()                                   //?????
{
	int a;
	cin>>a;                                  //??a
	jiaogu(a);                               //????
	return 0;  
}                                            //?????