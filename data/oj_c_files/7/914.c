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
	char s[256],sub[256],replace[256];
	gets(s);
	gets(sub);
	gets(replace);
	
	int ls=strlen(s);
	int lsub=strlen(sub);
	char sr[256];
	int i,j;
	int same;
	for(i=0;i<ls;i++){
		for(j=0;j<lsub;j++){
			sr[j]=s[i+j];
		}
		sr[j]='\0';
		same=strcmp(sr,sub);
		if(same==0){
			printf("%s",replace);
			i=i+lsub;
			printf("%s",&s[i]);
			break;
		}else{
			printf("%c",s[i]);
		}
	}
	return 0;
}