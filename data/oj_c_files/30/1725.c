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
int n, i, sum = 0;//????n,i,sum,k,??sum?????0
cin >> n;
for (i=1;i<=n;i++)
{
//???????k????????7????k==0,??7???
 ;
if ( ( ( i % 7 == 0 ) + ( 69 < i  && i < 80 ) + ( i - ( i / 10 ) * 10 == 7 ))== 0)
sum = sum + i * i;//??7??????????
}
cout << sum << endl;
return 0;
}