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
	int zimu[26]={0};
	int i,a,z;
	int t=0;
	a='a';
	z='z';
	char str[301];
	gets(str);
        for (i=0;i<strlen(str);i++){
		if ((str[i]>=a)||(str[i]<=z)){
			zimu[str[i]-a]++;
		}
	}
		for (i=0;i<26;i++){
		   if (zimu[i]>0){
			   printf("%c=%d\n",a+i,zimu[i]);
			   t++;
			  }
		}
		if (t==0){
			printf("No\n");
		}
    return 0;
}