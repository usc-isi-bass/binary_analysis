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

int p(char st1[ ])
{
	int i;
	if(st1[0]<65||(st1[0]>90&&st1[0]<95)||st1[0]==96||st1[0]>122)return 0;
	for(i=1;i<strlen(st1);i++)
		if(st1[i]<48||(st1[i]>57&&st1[i]<65)||(st1[i]>90&&st1[i]<95)||st1[i]==96||st1[i]>122)return 0;
	return 1;
}
int main()
{
	int i,n;
	char ch[100];
	cin>>n;
	cin.get();
	for(i=1;i<=n;i++)
	{
		cin.getline(ch,100,'\n');
		cout<<p(ch)<<endl;
	}
	return 0;
}