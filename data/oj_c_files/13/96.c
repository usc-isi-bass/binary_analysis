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
	int n, i, j, num[20000] , st[91] , tot=0 ;
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d",&num[i]);
	for( i=0 ; i<n ; i++ )
	{
	  for( j=0 ; j<i ; j++ ) if(num[j]==num[i])break;
	  
	  if( j==i ) st[++tot]=num[i];
	}
	for( i=1 ; i<tot ; i++ ) printf("%d ",st[i]);
	printf("%d",st[tot]);
}
