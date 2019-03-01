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


void swap(int a[], int h, int t) {
  int i, j, te;
  for (i = h, j = t; i < j; i++, j--) {
	te = a[i];
    a[i] = a[j];
	a[j] = te;
  }
}

void dump(int a[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("%d", a[i]);
	if (i != n-1)
		printf(" ");
  }
    
}

int main() {
  int n, m;
  int a[100];
  scanf("%d %d", &n, &m);
  m = n - m;
  int i;
  for (i = 0; i < n; i++)
     scanf("%d", &a[i]);
  swap(a, 0, m - 1);
  swap(a, m, n - 1);
  swap(a, 0, n - 1);
  dump(a, n);
  return 0;
}