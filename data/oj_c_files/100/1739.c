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
	int cd=0, i, a;
	char zm[300];
	char fh[53]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	int fhd[53]={0};
	scanf("%s",zm);
	for(i=0;i<52;i++){
		fhd[i]=0;
		for(a=0;a<300&&zm[a]!='\0';a++){
			if(zm[a]==fh[i]){
				fhd[i]=fhd[i]+1;	
			}
		}
	}
	for(i=0;i<52;i++){
		if(fhd[i]>=1){
			printf("%c=%d\n",fh[i],fhd[i]);
			cd=1;
		}
		
	}
	if(cd==0){
			printf("No");
		}
	return 0;
}


			