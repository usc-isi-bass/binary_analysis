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
	int n,m,wrong_mark,i,j,time,mark;
	scanf ("%d",&n);
	for (i=0;i<n;i++){
		scanf("%d",&m);
		if(m==0){
			mark=60;
		}
		if(m!=0){
			for(j=1;j<m+1;j++){
				scanf("%d",&wrong_mark);
				time=wrong_mark+3*j;
				if(time<57&&wrong_mark<60-3*m){
					mark=wrong_mark+60-time;
				}
				if(time>=57&&wrong_mark<66-3*m){
					mark=wrong_mark;
				}
			}
		}printf("%d\n",mark);
	}
	return 0;
}

