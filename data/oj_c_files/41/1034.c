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
	int a,b,c,d,e;
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=5;b++)
	{
		if(a!=b)
	{
		for(c=1;c<=5;c++)
	{
		if(a!=c&&b!=c)
	{
		for(d=1;d<=5;d++)
	{
		if(a!=d&&b!=d&&c!=d)
	{
		for(e=1;e<=5;e++)
	{
		if(a!=e&&b!=e&&c!=e&&d!=e)
		{
			if((((e==1)&&((a==1)||(a==2)))+((b==2)&&((b==1)||(b==2)))+((a==5)&&((c==1)||(c==2)))+((c!=1)&&((d==1)||(d==2)))+((d==1)&&((e==1)||(e==2)))==2)&&(a==5)&&(e==4)&&((e!=1)+(b!=2)+(a!=5)+(c==1)+(d!=1)==3))

cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;


}}}}}}}}}


           			return 0;
		}

