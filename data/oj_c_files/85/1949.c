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

int main(){
	char a[100][20];
	int n,i,test,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
         scanf("%s",a[i]);
	}
    for(i=0;i<n;i++)
	{
		for(j=0;a[i][j]!='\0';j++)
		{
			test=1;
			if(j==0)
			{
				if((a[i][j]>='A'&&a[i][j]<='Z')||a[i][j]=='_'||(a[i][j]>='a'&&a[i][j]<='z')) test=1;
				else {test=0;break;}
			}
			else if((a[i][j]>='A'&&a[i][j]<='Z')||a[i][j]=='_'||(a[i][j]>='0'&&a[i][j]<='9')||(a[i][j]>='a'&&a[i][j]<='z')) test=1;
			else {test=0;break;}
		}
		if(test==0) printf("no\n");
		else printf("yes\n");
    }
	return 0;
}
