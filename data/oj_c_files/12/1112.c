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
	int sz[16], duishu=0, zushu,i;
	for(zushu=0;1;zushu++){
		for(i=0;i<16;i++){
			scanf("%d", &sz[i]);
			if(sz[i]==0||sz[0]==-1)
				break;
		}
		if(sz[0]==-1)
			break;
		for(i=0;sz[i]!=0;i++){
			int j;
			for(j=0;sz[j]!=0;j++){
				if(sz[i]==2*sz[j])
					duishu++;
			}
		}
		printf("%d\n", duishu);
		duishu=0;
		for(i=0;i<16;i++){
			sz[i]=0;
		}
	}
	return 0;
}

