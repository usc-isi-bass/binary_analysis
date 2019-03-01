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

char Dat[maxn];
int n,Stac[maxn],Top;
int main() {
scanf("%s",&Dat);
n = strlen(Dat);
Top = 0;
for (int i = 0; i < n; i++)
    if (Dat[i] == Dat[0])
	Stac[++Top] = i;
    else
	printf("%d %d\n",Stac[Top--],i);
}