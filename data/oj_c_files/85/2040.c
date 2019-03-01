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
int n;
cin>>n;
while(n--)
{
	char a[30];
	cin>>a;
	int la=strlen(a);
	int i;
	int count=0;
	for (i=0;i<la;i++)
	{
		if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')||(a[i]>='0'&&a[i]<='9')||a[i]=='_')
			count++;
	}
	if (count!=la||(a[0]>='0'&&a[0]<='9'))
		cout<<"no"<<endl;
	else cout<<"yes"<<endl;
}
	return 0;
}
