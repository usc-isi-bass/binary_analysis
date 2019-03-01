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
	scanf("%d",&n);
	char a[100][100],b[100][100];
	int i;
	for(i=0;i<n;i++)
		scanf("%s%s",&a[i],&b[i]);
	int p,q;
	for(i=0;i<n;i++)
	{
		for(p=0;a[i][p]!='\0';p++);
		for(q=0;b[i][q]!='\0';q++);
		int j,x=0;
		for(j=1;j<=q;j++)
		{
			if((a[i][p-j]+x)<b[i][q-j])
			{
				a[i][p-j]=a[i][p-j]+10-(b[i][q-j]-'0')+x;
				x=-1;
			}
			else
			{
				a[i][p-j]=a[i][p-j]-(b[i][q-j]-'0')+x;
				x=0;
			}
		}
		a[i][p-j]+=x;
		printf("\n%s",a[i]);
	}
	return 0;
}
