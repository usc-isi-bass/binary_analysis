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

inline char turn(char c)
{
	if(c>=97)return c-32;
	else return c;
}
int main()
{
	char ch[1200],temp;
	int length,i,j,k;
	cin>>ch;
	length=strlen(ch);
	k=1;
	temp=turn(ch[0]);
	for(i=1;i<length;i++)
	{
		if(turn(ch[i])==temp)
		{
			k++;
		}
		else
		{
			cout<<"("<<temp<<","<<k<<")";
			temp=turn(ch[i]);
			k=1;
		}
	}
	cout<<"("<<temp<<","<<k<<")";
	return 0;
}
