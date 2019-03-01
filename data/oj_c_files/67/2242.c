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
int n;
double y[500] = {0}, a, b;
cin >> n;
cin >> a >> b;
y[0] = b / a;
for (int i = 1; i < n; i++) {
cin >> a >> b;
y[i] = b / a;
if (y[i] - y[0] > 0.05) { cout << "better";}
else if (y[0] - y[i] > 0.05) { cout << "worse";}
else { cout << "same";}
cout << endl;
}
return 0;
}