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

int main ()
{
char s[100][100] = {0};//??????s
int sum = 0;//?????sum??0????
while (true)
{
cin >> s[sum];//??s
sum ++;
if ( cin.get() == '\n' ) break;//???????????
}
char a[100] = {0};//????????
char b[100] = {0};//????????
cin >> a >> b;
for ( int i = 0; i < sum; i ++ )
for ( int j = 0; j < 100; j ++ )
{
if ( s[i][j] != a[j] ) break;//????s?????a?????
if ( j == 99 ) strcpy(s[i],b);//????????b
}
for ( int l = 0; l < sum - 1; l ++ )//??????s
cout << s[l] << " ";
cout << s[sum-1];
return 0;
}