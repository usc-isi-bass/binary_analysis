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
	int k,h[25],a[25][25] = {0};//a[i][j]???ij???????????????
	cin>>k;
	for (int i = 0; i < k; i++)
		cin>>h[i];
	int max = 1;
	for (int i = 0; i < k; i++)//???
		a[i][i] = 1;
	for (int i = 0; i < k - 1; i++)
		for (int j = i + 1; j < k; j++){
			a[i][j] = 1;
			for (int k = i; k < j; k++)
				if (h[k] >= h[j] && a[i][k] + 1 > a[i][j])
					a[i][j] = a[i][k] + 1;
			if(a[i][j] > max)
				max = a[i][j];
		}
	cout<<max<<endl;
	return 0;
}