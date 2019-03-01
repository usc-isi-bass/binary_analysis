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
	char a[100][100];
	int j,n,i,count=0,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%s",&a[i]);
	for(j=0;j<strlen(a[i]);j++)
	{
		if((int)a[i][0]>47&&(int)a[i][0]<58)
		{count++;break;}
		if((((int)a[i][j])<58&&((int)a[i][j]>47))||(((int)a[i][j]<91)&&((int)a[i][j]>64))||(((int)a[i][j]<123)&&((int)a[i][j]>96))||(((int)a[i][j]==95)))
        	continue;
    	else count++;}
	   if(count==0)
		printf("yes\n");
		else printf("no\n");
		count=0; 
	}
	
return 0;
}
	
