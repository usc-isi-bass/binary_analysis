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
int k;
scanf("%d %d",&n,&k);
int s[1000];
for(int a=0;a<n;a++){
    scanf("%d",&(s[a]));
}
int b;
for(int c=0;c<n;c++){
for(int i=0;i<n;i++){
    b=s[c]+s[i];
	if(b==k){
	printf("yes");
	return 0;
	}
}
}
printf("no");
return 0;
}