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



int n;

int x[10010],y[10010];
char a[100010],b[100010];

int tonum(char *s, int a,int b){
    int ans = 0;
    for(int i=a;i<=b;i++)
        ans = ans * 10 + (s[i] - '0');
    return ans;
}
int main(){
    //n = 1;
    while(scanf("%s %s",a,b) != EOF){
        n = 0;
        
        int len = strlen(a);
        int pre = 0;
        for(int i=0;i<=len;i++)
            if(i == len || a[i] == ',')
                x[++n] = tonum(a,pre,i-1),pre = i + 1;
        
        len = strlen(b);
        pre = 0;
        n = 0;
        for(int i=0;i<=len;i++)
            if(i == len || b[i] == ',')
                y[++n] = tonum(b,pre,i-1),pre = i + 1;
        
        int ans = 0;
        for(int i=0;i<=1000;i++){
            int ccount = 0;
            for(int j=1;j<=n;j++)
                if(x[j] <= i && y[j] > i)
                    ccount ++;
            ans = max(ans ,ccount);
        }
        
        printf("%d %d\n",n,ans);
    }
    return 0;
}
