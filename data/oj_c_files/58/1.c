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


int main() {
        int n;
        cin >> n;
        cin.get();
        while (n -- > 0) {
                char s[100];
                cin.getline(s, 100);
                if (s[0] >= 'a' && s[0] <= 'z'
                        || s[0] >= 'A' && s[0] <= 'Z'
                        || s[0] == '_') {
                        int i = 0;
                        while (s[i] != '\0') {
                                if (s[i] >= 'a' && s[i] <= 'z'
                                        || s[i] >= 'A' && s[i] <= 'Z'
                                        || s[i] >= '0' && s[i] <= '9'
                                        || s[i] == '_')
                                        ;
                                else
                                        break;
                                i ++;
                        }
                        if (s[i] == '\0')
                                cout << 1 << endl;
                        else
                                cout << 0 << endl;
                }
                else {
                        cout << 0 << endl;
                }
        }
        return 0;
}
