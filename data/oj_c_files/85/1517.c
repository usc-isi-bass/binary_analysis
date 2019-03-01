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
	int n;
	scanf("%d",&n);
	char a[100];
	for(int i=0;i<n;i++)
	{
		scanf("%s",a);
		if(a[0]-'A'>=0&&a[0]-'Z'<=0||
			a[0]-'_'==0||
			a[0]-'a'>=0&&a[0]-'z'<=0)
		{
			for(int j=1;j<100;j++)
			{
				if(a[j]=='\0')
				{
					printf("yes\n");
					break;
				}else
				if(a[j]-'A'>=0&&a[j]-'Z'<=0||
			       a[j]-'_'==0||
			       a[j]-'a'>=0&&a[j]-'z'<=0||
					a[j]-'0'>=0&&a[j]-'9'<=0)
				{
					continue;
				}else
				{
					printf("no\n");
					break;
				}

			}
		}else
		{
			printf("no\n");
		}
	}
        return 0;
}