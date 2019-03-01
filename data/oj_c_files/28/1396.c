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
	char a[10000];
	gets(a);
	int length[301]={0};
	int i,geshu=0,state=OUT;

	geshu=0;

	for(i=0;a[i]!='\0';i++){
		if(a[i]==' '){
			state=OUT;
		}
		else{
			if(state==OUT){
				geshu++;
				length[geshu]++;
				state=IN;
			}
			else if(state==IN){
				length[geshu]++;
			}
		}
	}

	for(i=1;i<geshu;i++){
		printf("%d,",length[i]);
	}
	printf("%d",length[geshu]);

	return 0;
}
