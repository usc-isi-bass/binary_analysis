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

////////////////////////
//???????      //
//??????        //
//???1200012823    //
//???2012?11?30?//
//????????    //
////////////////////////


// ???????fromP???blockSize??????targetP
void BlockMove(int* fromP, int* targetP, int blockSize)
{
	if (blockSize == 0)
		return;
	for (int i = 0; i < blockSize; i++) // ????
		*(targetP + i) = *(fromP + i);
}

int main()
{
	int m, i, nums[200], n;
	cin >> n >> m;
	for (i = 0; i < n; i++)
		cin >> nums[i + 100]; // ??????????100?????
	BlockMove(nums + 100 + n - m, nums + 100 - m, m); // ????m???????100?????
	cout << nums[100 - m]; // ????????????????
	for (i = 1; i < n; i++)
		cout << ' ' << nums[100 - m + i];
    return 0;
}