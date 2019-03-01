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

/*
 * kuohao.cpp
 *?? - 3704:??????
 *  Created on: 2012-12-6
 *      Author: ???
 */
int i,j,k,lena;
char a[101];
int main(){
	while(cin>>a)
	{
		cout<<a<<endl;
		lena=strlen(a);
		for(i=0;i<lena;i++)
		{
			if(a[i]==')'){
				for(j=i;j>=0;j--){
					if(a[j]=='('){
						a[i]='*';
						a[j]='*';
						break;
					}
				}

				}
			}
		for(i=0;i<lena;i++)
		{
			if(a[i]=='(')
				{
				a[i]='$';
				}
			else
				if(a[i]==')')
					{a[i]='?';
				}
				else a[i]=' ';
		}
		cout<<a<<endl;
	}
		return 0;
}