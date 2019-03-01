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


int change(int);

const int N=100+1;
char s[N],a[N],b[N],c[N];
int la=0,ls=0;

int main()
{
	int p=0;
	cin.getline(s,N);
	cin>>a>>b;
	la=strlen(a);
	ls=strlen(s);
	if (s[p]==a[0]) p=p+change(p);
	while (p<ls)
	{
		if ( (s[p]==a[0]) && (s[p-1]==' ') ) p=p+change(p);
		else 
		{
			cout<<s[p];p++;
		}
	}
	cout<<endl;
	return 0;
}


int change(int p)
{
	int i,j;
	for (i=0;i<la;i++)
		if ( s[p+i] != a[i] ) break;
	if ( (i==la) && ( s[p+la]==' ' || s[p+la]=='\0') )
	{
		cout<<b;return i;
	}
	for (j=0;j<i;j++)
		cout<<s[p+j];
	return i;
}