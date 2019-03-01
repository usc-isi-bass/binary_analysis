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
    int shu;//?????? 
    cin>>shu;
    if (shu%3==0&&shu%5==0&&shu%7==0) cout<<"3 5 7";
    else 
    {
         if (shu%3==0&&shu%5==0) cout<<"3 5";
         if (shu%5==0&&shu%7==0) cout<<"5 7";
         if (shu%3==0&&shu%7==0) cout<<"3 7";
         }
         if (shu%3==0&&shu%5!=0&&shu%7!=0) cout<<"3";
         if (shu%3!=0&&shu%5==0&&shu&7!=0) cout<<"5";
         if (shu%3!=0&&shu%5!=0&&shu%7==0) cout<<"7";
         if (shu%3!=0&&shu%5!=0&&shu%7!=0) cout<<"n";
         return 0;
         }