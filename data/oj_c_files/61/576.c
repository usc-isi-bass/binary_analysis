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
    int n,a;
    int sz[20];
    scanf("%d",&n);
    for(int hang=1;hang<=n;hang++){
		scanf("%d",&a);
		sz[0]=1;
		sz[1]=1;
		for(int i=2;i<a;i++){
			sz[i]=sz[i-1]+sz[i-2];
		}
		printf("%d\n",sz[a-1]);
	}

	return 0;
}
