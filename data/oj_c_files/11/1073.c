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
int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
int month_l[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    int n, m,d;
   cin >> n >> m >> d;
int counter = 0;
    for(int  i = 0 ; i < m-1; i++){
        if(i == 1){
            if(n%4==0&&(n%100!=0)||n%400==0){
                counter++;
}
}
        counter = counter + month[i];
}

counter = counter + d;
cout << counter;
}