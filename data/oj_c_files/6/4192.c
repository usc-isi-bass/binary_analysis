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
	int array[200][200];
	int *p[200];
	for (int i=0;i<=200;i++)
		p[i]=array[i];
	int k=0;
	cin >> k;
	for (int i=0;i<k;i++){
		int m=0,n=0,sum=0;
		cin >> m >> n;
		for (int j=0;j<m;j++)
			for (int l=0;l<n;l++){
				cin >> p[j][l];
				if (j==0||l==0||j==m-1||l==n-1)
					sum+=p[j][l];
			}
		cout << sum << endl;
	}
	return 0;
}