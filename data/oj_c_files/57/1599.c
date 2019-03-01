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
	int n, i;
	char ward[20], a;
	scanf("%d", &n);
    for(i=0;i<n;i++){
		scanf("%s", ward);
		a=strlen(ward)-1;
        if((ward[a]=='r')||(ward[a]=='y')){
			ward[a-1]='\0';}
		else{
			ward[a-2]='\0';}
		printf("%s\n", ward);
	}
	return 0;
}