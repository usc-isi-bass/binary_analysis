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
	int i, num;
	int sz[100] = {0};
	int j,k;
	int geshu=-1;
	while(1)
	{
		i = 0;
		scanf("%d",&num);
		if ( num == -1 )
			break;
		sz[0] = num;
		while(1)
		{
			if ( sz[i] == 0 )
				break;
			i++;
			scanf("%d",&sz[i]);
		}
		for(k=0;k<=i;k++){
			for(j=0;j<=i;j++){
				if(sz[j]==2*sz[k]){
					geshu=geshu+1;
				}
			}
		}
		printf("%d\n",geshu);
		geshu=-1;
	}
	return 0;
}
