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
??
??????????????????????????????????????????????????????????????????????????0????
??????????????????????????????????????????????????????????????????????????????
????????????????????????????????????????????????????????????
?????????????????????????????????????????????
???????????????????????????????????????????????

????
???????????????????????????????????????????????????????????????

????
????????????????????????????????????????????????????

????
((()(())())(()))

????
2 3
5 6
4 7
8 9
1 10
12 13
11 14
0 15

??
????????????????????�(� ? �)� ?????? �(� ????????? �)� ?????????????? �(� ??? �)� ???????????????? 

?????????????

*/


void output(char a[],char m,char f)
{
	int i=0,k,outa,outb;
	while(a[i]!='\0')
	{
		if (a[i]!=f)  i++;
		else
		{
			outb=i;
			while (a[i]!=m)   i--;
			outa=i;
			cout<<outa<<" "<<outb<<endl;
			a[outa]=' ';
			a[outb]=' ';
			output(a,m,f);
		}
	}
}

int main()
{
	char a[100],m,f;
	int t=1;
	cin>>a;
	m=a[0];
	while(1)
	{
		if (a[t]==m)   t++;
		else
		{
			f=a[t];
		    break;
		}
	}
	output(a,m,f);
	return 0;
}
