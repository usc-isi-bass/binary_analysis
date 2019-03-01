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
char z[50],m[50];
int a,n,b=0;
scanf("%s %s",z,m);
n=strlen(z);
for(int i=0;i<50;i++){
	if((m[i]==z[0])&&(m[i+n-1]=z[n-1])){
		a=1;
		for(int j=i+1;j<i+n-2;j++){
			if(m[j]!=z[a])b=1;
			a++;
		}
		if(b==0){
		printf("%d",i);
		break;
		}
	}
}
return 0;
}
