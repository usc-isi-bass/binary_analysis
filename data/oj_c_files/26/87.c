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

// ???????.cpp : Defines the entry point for the console application.
// ????????????????????
int main()
{
	char a[100];                              //??????a[100]??????????                 
	int i=0,j=0;                              //??i?j?????0
	cin.get(a,101);                           //??
	for(i=0;i<strlen(a);i++)                  //for??
	{
		if(a[i]==' ')                         //???????
		{
			for(j=i+1;j<100;j++)              //for??
			{
				if(a[j]==' ')                 //??a[j]??????-1??
					a[j]=-1;
				if(a[j]!=' '&&a[j]!=-1)                 //??a[j]????????-1??????
					break;
            }
				
		}
	}
	for(i=0;i<strlen(a);i++)                  //for?????a[i]??-1????a[i]
	{
		if(a[i]!=-1)
			cout<<a[i];
	}
	return 0;
}