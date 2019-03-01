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
    char ori[120],aft[120];
    cin.getline(ori, 110, '\n');
    char *p_1=ori;
    char *p_2=aft;
    for (int i=0; i<strlen(ori)-1; i++) {
        *(p_2+i)=(char)((int)*(p_1+i)+(int)*(p_1+i+1));
    }
    *(p_2+strlen(ori)-1)=(char)((int)*(p_1+strlen(ori)-1)+(int)*(p_1));
    for (int i=0; i<strlen(ori); i++) {
        cout<<*(p_2+i);
    }
}