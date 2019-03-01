/*
 * This describes the same implementation as the Z-80 assembly version
 * Chris Williams <cow3.14@juno.com>
 */

#include <ctype.h>

int atoi(char *s)
{
    int result = 0;
    int neg = 0;
    
    while (isspace(*s))
        ++s;
    
    switch (*s) {
    case '-': neg = 1; /* fall through */
    case '+': ++s;
    }
    
    while (isdigit(*s))
        result = result * 10 + *s++ - '0';
    
    if (!neg)
        return result;
    
    return -result;
}