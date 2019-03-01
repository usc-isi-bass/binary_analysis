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
int n, interuptCount, currentNum, sec, lostTime ;
const int maxSeconds = 60;
cin >> n;
for (int i = 0; i < n; ++i)
{ cin >> interuptCount;
lostTime = 0; 
for (int j = 0; j < interuptCount; ++j)
{ cin >> currentNum;
sec = currentNum + lostTime; 
if (sec < maxSeconds)
if ((maxSeconds - sec) > 3)
lostTime += 3;
else
lostTime += maxSeconds - sec;
}
cout << maxSeconds - lostTime << endl;
} 
	return 0;
}




