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
	char Words[3000];
	int i=0,Cd[300]={0},j=0,k=0;
	gets(Words);
	int l=strlen(Words);
		for (i=0;i<l;i++){
			if (Words[i]!=' '){
				if(k==1){j++;}
				Cd[j]++;
				k=0;
			}
			else if(Words[i]==' '){k=1;}
		}
		for(int t=0;t<j;t++){
			printf("%d,",Cd[t]);
		}
		printf("%d",Cd[j]);
		return 0;
}
