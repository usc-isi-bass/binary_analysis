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
	char a[300],b[300];
	int c[300],aa[300],bb[300],i,la,lb,l;
	cin>>a;
	cin>>b;
	la=strlen(a);
	lb=strlen(b);
   memset(aa,0,sizeof(aa));
   memset(bb,0,sizeof(bb));
	for (i=0;i<la;i++)
	aa[i]=a[la-i-1]-'0';

	for (i=0;i<lb;i++)
	bb[i]=b[lb-i-1]-'0';

	l=la;if(lb>l) l=lb;
	memset(c,0,sizeof(c));
	for (i=0;i<l;i++)
	c[i]=aa[i]+bb[i];

	for (i=0;i<l;i++)
	if (c[i]>=10)
	{
		c[i]-=10;
		c[i+1]++;
	}
	if (c[l]>0) l++;
	while ((c[l-1]==0)&&(l>1)) l--;
	for (i=l-1;i>=0;i--)
	cout<<c[i];
}