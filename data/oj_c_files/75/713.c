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

//********************************
//*????????
//*??? ?? 1300012814  **
//*???2013.10,30  **
//********************************
int main()
{
     int a[1000], b[1000], num = 1, rs = 0;
     char c;

	 cin >> a[0];
	 c = cin.get();
	 while (c == ',')
	 {
	 cin >> a[num];
		 num++;
		 c = cin.get();
	 }
	 cin >> b[0];
	 c = cin.get();
	 int i = 1;
	 while (c == ',')
	 {
	 cin >> b[i];
		 i++;
		 c = cin.get();
	 }
	 for (int i = 0;i < 1000;i++)
	 {
		 int n = 0;
	 for (int j = 0; j < num; j++)
	 {
		 if(a[j] <= i && b[j] > i)
			 n++;
	 }
	 if (n > rs) rs = n;
	 }
	 cout << num << " " << rs <<endl;

	 return 0;
}