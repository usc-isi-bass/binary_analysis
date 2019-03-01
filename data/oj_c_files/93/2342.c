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
{   int a,ans[4],i,all;
	scanf("%d",&a);
	for(i=1;i<=3;i++)ans[i]=0;
	all=0;
    if((a%3)==0) ans[1]=3;
	if((a%5)==0) ans[2]=5;
    if((a%7)==0) ans[3]=7;
    for(i=1;i<=3;i++){
		if((ans[i]!=0)&&(all!=0)){printf(" %d",ans[i]);
                    all++;
		}
		if((ans[i]!=0)&&(all==0)){printf("%d",ans[i]);
                    all++;
		}


	}
    if(all==0) printf("n");
    return 0;
}
