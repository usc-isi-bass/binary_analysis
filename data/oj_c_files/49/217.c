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


void revchk(char *a,int l)//????????????
{
	int i,j=0;
	for(i=0;i<=l-1;i++)
		if(a[i]!=a[l-1-i])//???????
			j=1;
	if(j==0)
	{
		for(i=0;i<=l-1;i++)//???????
			cout<<a[i];
		cout<<endl;
	}
}

int main()
{
	int m,n;
	char b[500];
	cin.getline(b,500);//??
	for(m=2;m<=(int)strlen(b);m++)//??2-strlen
		for(n=0;n<=(int)strlen(b)-m;n++)//??????m?
			revchk(&b[n],m);
	return 0;

}