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


int main() {
	double distance = 0;
	double max = 0;
	double point[200][2] = {0};
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {      // store the position of each point
		cin >> point[i][0] >> point[i][1];
	}
	for(int i = 0; i < n - 1; i++)
		for(int j = i + 1; j < n; j++) {          // calculate the distances
			distance = (point[i][0] - point[j][0]) * (point[i][0] - point[j][0]) + (point[i][1] - point[j][1]) * (point[i][1] - point[j][1]);
			if(distance > max) max = distance;
		}
	max = sqrt(max);
	printf("%.4f\n", max);
	getchar();
	getchar();
	return 0;
}