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

//#include<memory>

int main()
{
	int s[28];
	int m[28];
	int n = 0;
	cin >> n;
	int i = 0, j = 0;
	for (i = 0; i < n; i ++){
		cin >> s[i];
		m[i] = 1;
	}
	for (i = 1;i < n; i ++){
		for (j = 0; j < i; j ++){
			if (s[i] <= s[j] && m[j] + 1 > m[i]){
				m[i] = m[j] + 1;
			}
		}
	}
	int max = 0;
	for (i = 0; i < n; i ++){
		if (max < m[i]){
			max = m[i];
		}
	}
	cout << max << endl;
	return 0;
}