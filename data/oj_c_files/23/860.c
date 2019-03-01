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
	char ch[200];
	char*a[30];
	int i,k;

	for(i=0;i<30;i++)
	{
		a[i]=NULL;
	}
	cin.getline(ch,110);
	a[0]=strtok(ch," ");
	i=1;
	while((a[i]=strtok(NULL," "))!=NULL)
	{
		i++;
	}
	for(k=i-1;k>0;k--)
	{
		cout<<a[k]<<' ';
	}
	cout<<a[0];
	return 0;
}