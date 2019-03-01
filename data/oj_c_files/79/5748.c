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
	int n,m;
	while(true)
	{
		scanf("%d%d",&n,&m);
		if(n==0 && m==0) break;
		int out[301];
		for(int i=0; i<n; i++) out[i] = 0;
		int cur_id = -1;
		// ??n-1???
		for(int i=0; i<n-1; i++) {
			int count = 0;
			while(count < m) {
				cur_id = (cur_id+1) % n;
				if(out[cur_id] == 0) {
					count += 1;
				}
			}
			out[cur_id] = 1;
		}
		for(int i=0; i<n; i++) {
			if(out[i] == 0) {
				printf("%d\n", i+1);
			}
		}
	}
	return 0;
}