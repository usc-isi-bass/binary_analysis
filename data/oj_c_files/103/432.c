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
	char a[1001]; cin>>a;
	int i,j; int l=strlen(a); int t;char temp;
	for (i=0;i<l;i++) if (a[i]>='a'&&a[i]<='z') a[i]=a[i]+'A'-'a';
	for (i=0;i<l;i++)
	{
		t=0;
		for (j=i;;j++)
			if (a[j]==a[i]) t=t+1;
			else break;
		 temp=a[i];
		cout<<'('<<temp<<','<<t<<')';
		i=i+t-1;
	}
	return 0;
}
