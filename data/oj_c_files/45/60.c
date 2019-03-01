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
	char s1[50],s2[50],s3[50];
	scanf("%s %s",s1,s2);
    int l=strlen(s1);
	int i,j;
	for(i=0;i<50;i++){
		if(s2[i]==s1[0]){
			for(j=0;j<l;j++){
				s3[j]=s2[i+j];
			}
			s3[l]='\0';
		}
		if(strcmp(s1,s3)==0){
			printf("%d",i);
			break;
		}
		else{
			continue;
		}
	}
	
	return 0;
}
