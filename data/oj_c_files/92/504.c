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

int ans, n, a[1000], b[1000];
int cmp(int x, int y){
	return (x > y);
}
int main(){
	int i, j, an, bn;
	while(cin >> n && n){
		ans = 0;
		an = n;
		bn = n;
		for(i = 0; i < n; i++)
			cin >> a[i];
		for(i = 0; i < n; i++)
			cin >> b[i];
		sort(a,a+n,cmp);
		sort(b,b+n,cmp);
		for(i = 0, j = 0; i < an && j < bn;){
			if(a[i] > b[j]){
				ans++;
				i++;
				j++;
			}
			else if(a[i] < b[j]){
				if(a[an-1] < b[j]){
					ans--;
					an--;
					j++;
				}
			}
			else{
				if(a[an-1] > b[bn-1]){
					ans++;
					an--;
					bn--;
				}
				else{
					if(a[an-1] < b[j]){
						ans--;
						an--;
						j++;
					}
					else if(a[an-1] == b[j]){
						an--;
						j++;
					}
				}
			}
		}
		cout << ans*200 << endl;
	}
	return 0;
}