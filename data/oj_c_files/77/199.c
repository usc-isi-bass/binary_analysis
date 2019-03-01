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

int len;
char boy,girl;
void paidui(char[]);
int main()
{
	char kids[100];
	cin>>kids;
	len=strlen(kids);
	boy=kids[0];
	girl=kids[len-1];
	paidui(kids);
	return 0;
}
void paidui(char kids[])
{
	int i=0,j;
	while(kids[i]!=girl)
		i++;
	j=i;
	while(kids[j]!=boy)
		j--;
	cout<<j<<" "<<i<<endl;
	kids[i]=kids[j]=1;
	if(kids[len-1]==girl)
		paidui(kids);
}