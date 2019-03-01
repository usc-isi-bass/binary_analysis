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

int shu1, shu2;
int sum[max], sum2[max];
int comp(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}
void input()
{
	cin >> shu1 >> shu2;
}
void input1()
{
	int i;
	for (i = 0; i < shu1; i++)
		cin >> sum[i];
	for (i = 0; i < shu2; i++)
		cin >> sum2[i];
}
void pai()
{
	qsort(sum, shu1,sizeof(int),comp);
	qsort(sum2, shu2,sizeof(int),comp);
}
void print()
{
	int i;
	int k = 0;
	for (i = 0; i < shu1; i++)
	if (k == 0){ cout << sum[i]; k++; }
	else cout << " " << sum[i];
	for (i = 0; i < shu2;i++)
	if (k == 0){ cout << sum2[i]; k++; }
	else cout << " " << sum2[i];
}
int main()
{
	input();
	input1();
	pai();
	print();
	
}