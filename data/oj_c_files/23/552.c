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
	int i,j=0,k,m=0,x,y,z,num;
	char a[100]={'\0'};
	char b[100][100]={'\0'};
	cin.getline(a,100);//??
	num=strlen(a);
	a[num]='\n';//?????????
	for(i=0;i<=num;i++)
	{
		if(a[i]==' '||a[i]=='\n')//??????????
			{for(k=j;k<i;k++)
			{
				b[m][k-j]=a[k];//????
			}
			m=m+1;
			j=i+1;}
	}
	for(x=m-1;x>0;x--)
	{
		cout<<b[x]<<" ";//????
	}
	cout<<b[0];
	return 0;
}