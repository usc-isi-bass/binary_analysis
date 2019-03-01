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

int n, ans;
int f[1000];
int a[1000];
int main(){
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++){
        f[i] = 1;
        for (int j = 0; j < i; j++){
            if (a[j] >= a[i] && f[j]+1 > f[i])
               f[i] = f[j]+1;               
        }
        ans = ans > f[i]?ans:f[i];
    }
    cout << ans << endl;
    
}
