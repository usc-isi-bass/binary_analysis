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

int main(int argc, char* argv[])
{
    char s[20];
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
    scanf("%s",s);
	for(j=0;s[j]!='\0';j++){
		if(j==0){
    if((s[j]>='A'&&s[j]<='Z')||(s[j]>='a'&&s[j]<='z')||s[j]=='_')
	{
		if(s[j+1]=='\0')
		    	printf("yes\n");
		continue;
	}
    else{
			printf("no\n");
		break;
	}
		}
        else
		{
    if((s[j]>='A'&&s[j]<='Z')||(s[j]>='0'&&s[j]<='9')||(s[j]>='a'&&s[j]<='z')||s[j]=='_')
	{
		if(s[j+1]=='\0')
		    	printf("yes\n");
		continue;
	}
    else{
			printf("no\n");
		break;
	}
		}
	}
	}

   return 0;
}

