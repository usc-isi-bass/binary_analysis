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
int n[100],m[100],i,j,s[100];
for(i=1;n[i-1]!=0,m[i-1]!=0;i++){
  scanf("%d %d", &(n[i]),&(m[i]));
}
for(i=1;n[i-1]!=0,m[i-1]!=0;i++){
	s[i]=0;
	for(j=2;j<=n[i];j++) {
		s[i]=(s[i]+m[i])%j;
	}
	if(n[i]!=0,m[i]!=0){
    printf("%d\n", s[i]+1);
	}
}
return 0;
}
