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

int main()
{
	char ch;
	int a=0,b=0,c=0,r,s,t,P[3],i;
	r=(b>a)+(c==a);
    s=(a>b)+(a>c);
    t=(c>b)+(b>a);//??????????
    for (a=0;a<=2;a++)
	{for(b=0;b<=2;b++)
	{for(c=0;c<=2;c++)//????????????????
	{
	if((r+a==2)&&(s+b==2)&&(t+c==2))//????
	{
	P[0]=a;P[1]=b;P[2]=c;}
    }}}
	for(i=0;i<=2;i++)
	{if (P[i]==2) {ch=i+65;cout<<ch;}}
	for(i=0;i<=2;i++)
	{if (P[i]==1) {ch=i+65;cout<<ch;}}
    for(i=0;i<=2;i++)
	{if (P[i]==0) {ch=i+65;cout<<ch;}}


	return 0;
}