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

int main(int argc, char* argv[])
{
	char a[251],b[251];
	int c[254],i,l1,l2,m,n,l;
	scanf("%s%s",a,b);
	l=0;
	memset(c,0,sizeof(c));
    l1=(int)strlen(a);
	l2=(int)strlen(b);
	while(l1>0||l2>0)
	{
		m=(l1>0)?a[--l1]-'0':0;
		n=(l2>0)?b[--l2]-'0':0;
		c[l]+=m+n;
		c[l+1]=c[l]/10;
		c[l]%=10;
		l++;
	}
	while(c[l]==0&&l>0)
		l--;
	for(i=l;i>=0;i--)
		printf("%d",c[i]);
	printf("\n");
	return 0;
}