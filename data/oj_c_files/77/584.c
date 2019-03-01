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

char dui[1000], male, female;
void rankgame(int left, int right)
{
	if(left == -1)return;
	if(dui[right] == male)
	{
		left = right;
		right++;
		rankgame(left, right);
	}
	if(dui[left] == 0)
	{
		left --;
		rankgame(left, right);
	}
	if(dui[left] == male && dui[right] == female)
	{
		cout << left << ' ' << right << endl;
		dui[left] = 0;dui[right] = 0;
		left --;
		right ++;
		rankgame(left, right);
	}
}
int main()
{
	cin.getline(dui, 1000, '\n');
	male = dui[0], female = dui[strlen(dui) - 1];
	rankgame(0, 1);
	return 0;
}
