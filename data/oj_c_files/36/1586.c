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
	int i,j,k;
	char a[100]={0};
	char b[100]={0};
	scanf("%s",a);
	scanf("%s",b);
	int c[100]={0};
	int sum=0;

	if(strlen(a)!=strlen(b))
		{printf("NO");
	return 0;}
	else{

	for(i=0;i<100;i++)
		for(j=0;j<100;j++)
			if((a[i]==b[j])&&(a[i]!='0')&&(!c[j]))
					{c[j]=1;
					break;}


	for(i=0;i<strlen(b);i++)
		sum=sum+c[i];
	
	if(sum==strlen(b))
		printf("YES");
	else
		printf("NO");



	}
	
}