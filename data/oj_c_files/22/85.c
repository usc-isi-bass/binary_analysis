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

main() {
	int a[1000];
	int pos=0,i;
	char poss;
	int max=-1,nextmax=-1111;
	while (scanf("%d",&a[pos])!=EOF) {
		if (a[pos]>max) {
			nextmax=max;
			max=a[pos];
		} else {
			if (a[pos]>nextmax&&a[pos]!=max) {
				nextmax=a[pos];
			}
		}
		scanf("%c",&poss);
		pos++;
	}
	if (pos==0||pos==1||nextmax==-1) {
		printf("No");
	} else {
		if (a[pos]>max) {
			nextmax=max;
			max=a[pos];
		} else {
			if (a[pos]>nextmax&&a[pos]!=max) {
				nextmax=a[pos];
			}
		}
		if (nextmax!=-1111) {
		printf("%d",nextmax);
		}
}}

