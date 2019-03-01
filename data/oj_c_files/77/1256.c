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

int a[60]={0},b[60]={0};
char c[120]={'\0'},ch;
int n=0,m=0;
int search1(int p)//???????????????????
{
	int i=p+1,j;
	while (c[i]=='('||(c[i]=='{')||(c[i]=='[')||c[i]=='<')
	{
		j=search1(i);//??
		i=j+1;
	}
	a[m]=p; b[m]=i; 
	m++;
	return i;
}
int main()
{
	int i=0;
	cin.get(ch);
	while (ch!='\n')
	{
		c[n]=ch;
		n++;
		cin.get(ch);
	}
	while (i<n)
		i=search1(i)+1;
	for (i=0; i<m; i++)
		cout<<a[i]<<' '<<b[i]<<endl;
	return 0;
}
