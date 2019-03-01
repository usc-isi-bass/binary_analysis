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
	int n,i,j,a[N],s[N],max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		s[i]=1;
    for(i=n-2;i>=0;i--)
		for(j=i+1;j<n;j++)
			if(a[j]<=a[i]&&s[i]<s[j]+1)
				s[i]=s[j]+1;
	for(i=0;i<n-1;i++)
		max=(max>s[i])?max:s[i];
    printf("%d",max);
	return 0;
}