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
    int n;
    int beg[100],end[100],ti[100]={0},t=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%d",&beg[i],&end[i]);
    }for(int i=0;i<n;i++){
        if(beg[i]>=90&&beg[i]<=140&&end[i]>=60&&end[i]<=90)
            ti[i]=1;
        for(int j=i+1;j<n;j++){
        if(beg[j]>=90&&beg[j]<=140&&end[j]>=60&&end[j]<=90)
            ti[i]++;
        else break;
    }
    }
    for(int i=0;i<n;i++){
        if(t<ti[i])
            t=ti[i];
    }
    printf("%d",t);
    return 0;
}