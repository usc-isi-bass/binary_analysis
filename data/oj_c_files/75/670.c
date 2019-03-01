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

//********************************
//* ???????? **
//* ????? 1300012990 **
//* ???2013.10.31 **
//********************************
int main()
{
	int i=0,j=0,a[1001],b[1001],m[1001]={0},x,y,num=0;
	char ch;                                       
	do
	{
		cin >> a[i];
		ch = cin.get();
		i++;
	}while (ch != '\n');                          
    do                                             
	{
		cin >> b[j];
		ch = cin.get();
		j++;
	}while (ch != '\n');  
	for(x=0;x<i;x++)
		for(y=a[x];y<b[x];y++)
			m[y]=m[y]+1;
	for(y=0;y<1000;y++)
		if(m[y]>num)
			num = m[y];
	cout << i << " "<< num;
	return 0;
}





