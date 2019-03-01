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
	char str[256],sub[256],rep[256],sz[256];
	scanf("%s%s%s",str,sub,rep);
	int a,b,c,tag;
	a=strlen(sub);
	c=strlen(str);
	int i,j;
	for(i=0;str[i]!='\0';i++){
		tag=0;
		if(str[i]==sub[0]){
			for(j=0;j<a;j++){
				sz[j]=str[i+j];
			}
			sz[a]='\0';
		}
		if(strcmp(sz,sub)==0){
			b=i;
			strcpy(sub,rep);
			tag=1;
			break;
		}
	}
	if(tag==1){
    	for(i=0;i<b;i++)
		{
	    	printf("%c",str[i]);
		}
    	printf("%s",sub);
    	for(i=b+a;i<c;i++)
		{
 	    	printf("%c",str[i]);
		}
	}
	else
	{
		printf("%s",str);
	}
	return 0;
}
