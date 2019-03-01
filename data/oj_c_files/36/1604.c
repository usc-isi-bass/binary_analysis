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
	char ce[27]= "abcdefghijklmnopqrstuvwxyz";
	char s1[max], s2[max];
	cin >> s1 >> s2;
	int ce1[26] = { 0 };
	for (int i = 0; i < strlen(s1);i++)
	for (int j = 0; j < 26;j++)
	if (s1[i] == ce[j]){
		ce1[j]++; break;
	}
	for (int i = 0; i < strlen(s2);i++)
	for (int j = 0; j < 26;j++)
	if (s2[i] == ce[j]){
		ce1[j]--; break;
	}
	int i = 0;
	for (i = 0; i < 26;i++)
	if (ce1[i] != 0)break;
	if (i == 26)cout << "YES";
	else cout << "NO";

}









