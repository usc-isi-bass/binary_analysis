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
	char zfc1[101],zfc2[101];
	int i,k;
	gets(zfc1);
	k=strlen(zfc1);
	for(i=0;i<k;i++){
		if(i!=k-1){zfc2[i]=zfc1[i+1]+zfc1[i];}
        else{zfc2[k-1]=zfc1[k-1]+zfc1[0];}
	}for(i=0;i<k;i++){
		printf("%c",zfc2[i]);
	}
	return 0;
}