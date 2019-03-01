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
	char sz[300];
	scanf("%s",sz);

	int i,j;
	int str[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	
	int len=strlen(sz);
	for (i=0;i<len;i++){
		str[sz[i]-'a']++;
	}
    
	int p=0;
	for (j=0;j<26;j++){
		if (str[j]!=0){
			printf("\n%c=%d",'a'+j,str[j]);
			p=1;
		}
	}
	if (p==0) printf("No");
        

	return 0;
}

