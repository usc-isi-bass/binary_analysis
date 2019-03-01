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

int main(){
	int n;
	int result=0;
	scanf("%d",&n);
    int i=1;
	for(i=1;i<=n;i++){
		if((int)i%7==0||(int)i/10==7||(int)i%10==7){
			continue;}

		result+=i*i;}
	    printf("%d",result);
		return 0;
}
