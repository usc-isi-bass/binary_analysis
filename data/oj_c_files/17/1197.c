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
 *???: brackets.cpp
 *??: ???
 *????: 2012-11-26
 *??: ????
 */



int brackets_matching(char str[],char result[],int n,int j) 
/*???i?????str?????????result?
 * n?????.i????????????????????
 */
{
	int i,p;
	for (i=j;str[i];i++){ //???????
		switch (str[i]){
			case '(' : //???
			p=brackets_matching(str,result,n+1,i+1); //??????????
			if (str[p]==')') //????
				result[i]=' '; //???????????
			else
				result[i]='$'; //??????????p??\0
			i=p;
			break;

			case ')' : //???
			if (!n) //????
				result[i]='?';
			else{
				result[i]=' ';
				return i;
			}
			break;

			default :
			result[i]=' ';
		}
	}
	result[i]=0;
	return i;
}

int main()
{
	char a[MAXL],result[MAXL];
	while (cin>>a){
		cout << a << endl;
		brackets_matching(a,result,0,0);
		cout << result << endl;
	}
	return 0;
}

