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
    int a[100];
    int i;
    int n;
    int e=0,f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
	{
    scanf("%d",&a[i]);
	}
    for(i=0;i<n;i++)
	{
    if(e<=a[i])
	{
    e=a[i];
	}

	}
    for(i=0;i<n;i++)
	{
    if(f<=a[i])
	{
     if(a[i]==e)
	 {
      continue;
	 }
      f=a[i]; 
	}
	}
    printf("%d\n%d\n",e,f);
    return 0;
}
