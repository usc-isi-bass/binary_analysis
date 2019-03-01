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
     int n;
     cin>>n;
     cout<<n/100<<endl;
     cout<<(n%100)/50<<endl;
     cout<<(n%50)/20<<endl;
     cout<<(n%50-(n%50)/20*20)/10<<endl;
     cout<<(n%10)/5<<endl;
     cout<<n%5<<endl;
     return 0;
}
