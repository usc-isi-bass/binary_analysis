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

int legal(char s[20])
{
	int i;
	
	if((s[0]>='a'&&s[0]<='z')||(s[0]>='A'&&s[0]<='Z')||s[0]=='_'){
	    for(i=0;s[i]!='\0';i++){
		    if(!((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||s[i]=='_'||(s[i]>='0'&&s[i]<='9')))
				
			return 0;
		}
		return 1;
	}
	else 	
	    return 0;

}
int main(int argc, char* argv[])
{
	int n,i;
	scanf("%d",&n);
		char s[20];
	for(i=0;i<n;i++){
		scanf("%s",s);
		if(legal(s)==1)
			printf("yes\n");
		else
			printf("no\n");
		}
    return 0;
}

