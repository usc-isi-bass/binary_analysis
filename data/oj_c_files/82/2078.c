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
    int a[100],b[100],m[100];
	int max=0;
	int n,k=0,s=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
		if((a[i]>=90)&&(a[i]<=140)&&(b[i]>=60)&&(b[i]<=90))
		{
			k++;
			m[s]=k;
			s++;
		}
		else
		{
			k=0;
		}
	}

for(int j=0;j<s;j++)
{
	if(m[j]>max)
	{
		max=m[j];
	}

}
printf("%d",max);
return 0;
}
