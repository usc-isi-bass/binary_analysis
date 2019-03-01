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

int map[110][110];
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>map[i][j];
			}
		}
	for(int i=0;i<n+m-1;i++){
		for(int j=i;j>=0;j--){
			int k = i-j;
			if(k>=0&&k<n&&j<m){
				cout<<map[k][j]<<endl;
				}
			}
		}
	return 0;
	}
