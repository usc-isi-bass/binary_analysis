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
	char str[100];
    int m,k;
	scanf("%d",&m);
	int n;
	for(k=0;k<m;k++){
		n=0;
		scanf("%s",str);
		n=strlen(str);
		if(str[n-2]=='e'&&str[n-1]=='r'){
			str[n-2]='\0';
			printf("%s\n",str);
		}
		else if(str[n-1]=='y'&&str[n-2]=='l'){
            str[n-2]='\0';
			printf("%s\n",str);
		}
		else if(str[n-1]=='g'&&str[n-2]=='n'&&str[n-3]=='i'){
			str[n-3]='\0';
            printf("%s\n",str);
		}
		else{
            printf("%s\n",str);
		}
	}
	return 0;
}