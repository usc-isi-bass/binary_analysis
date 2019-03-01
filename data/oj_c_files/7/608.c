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
	char s[256],a[256],b[256];
	gets(s);
	gets(a);
	gets(b);
	int i,j,k,t=-2;
	int lengths,lengtha,lengthb;
	lengths=strlen(s);
	lengtha=strlen(a);
	lengthb=strlen(b);

	for(i=0;i<lengths;i++){
		k=0;
		for(j=0;j<lengtha;j++){
			if(a[j]==s[i+j]){
				k++;
			}
		}
			
		if(k==lengtha){
			t=i;
			break;
		}
	}
	if(t!=-2){
		for(i=0;i<t;i++){
			printf("%c",s[i]);
		}
	printf("%s",b);
		for(i=t+lengthb;i<lengths;i++){
			printf("%c",s[i]);
		}
	}
	else{
		puts(s);
	}
	return 0;
}