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


int main()
{
    int n,i,age,p1=0,p2=0,p3=0,p4=0;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&age);
        if (age<=18) p1++;
        if (age>18&&age<=35) p2++;
        if (age>35&&age<=60) p3++;
        if (age>60) p4++;
    }
    printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\nOver60: %.2lf%%\n",(double)p1/n*100,(double)p2/n*100,(double)p3/n*100,(double)p4/n*100);
    return 0;
}




