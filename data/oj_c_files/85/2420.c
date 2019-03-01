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
	int j,n,i,sz[100];
	scanf("%d",&n);
	char str[21];
	for(i=0;i<n;i++)
	{
		sz[i]=1;
		scanf("%s",str);
        if(str[0]=='_'||(str[0]>='a'&&str[0]<='z')||(str[0]>='A'&&str[0]<='Z')){
           for(j=1;str[j]!='\0';j++)
		   {
			if(str[j]=='_'||(str[j]>='a'&&str[j]<='z')||(str[j]>='A'&&str[j]<='Z')||(str[j]>='0'&&str[j]<='9')) continue; 
				sz[i]=0;
		}}
		else sz[i]=0;
	}
	for(i=0;i<n;i++)
	{
		if(sz[i]==1)
			printf("yes\n");
			else
			printf("no\n");
	}
return 0;
	}