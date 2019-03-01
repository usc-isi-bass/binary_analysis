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


int main(){
	int n, count[26];
	char str[100001];

	cin >> n;
	while (n--){
		cin >> str;
		memset(count, 0, sizeof(count));
		int i;
		for (i = 0; str[i] != '\0'; i++)
			count[str[i] - 'a']++;

		for (i = 0; str[i] != '\0'; i++)
			if (count[str[i] - 'a'] == 1){
				cout << str[i] << endl;
				break;
			}
		if (str[i] == '\0')
			cout << "no" << endl;
	}
	return 0;
}