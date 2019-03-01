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


void ou(int n);
void ji(int n);
int main()
{
	int  n;
	cin >> n;
	if (n % 2 == 1)
		ji(n);
	else
		ou(n);
}
void ou(int n)
{
	int answer;
	answer = n / 2;
	cout << n << "/2=" << answer << endl;
	if (answer % 2 == 0)
		ou(answer);
	else
		ji(answer);
}
void ji(int n)
{
	if (n == 1){
		cout << "End"; return;
	}
	int answer;
	answer = n * 3 + 1;
	cout << n << "*3+1=" << answer << endl;
	if (answer % 2 == 0)
		ou(answer);
	else
		ji(answer);
	
}