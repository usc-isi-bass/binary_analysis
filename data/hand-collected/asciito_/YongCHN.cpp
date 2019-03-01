// atof.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <string.h>

int toInt(char c)
{
    if (c < '0' || c > '9') throw "bad format";

    return c - '0';
}

bool is_tail_blank(char c)
{
    return c == ' ' || c == 'f' || c == 'F';
}

void removeblank(const char * p, int & headPos, int & tailPos)
{
    int len = strlen(p);

    bool headFound = false;
    bool tailFound = false;

    headPos = 0;
    tailPos = 0;

    for (int i = 0; (i < len) && !(headFound && tailFound); i++)
    {
        if (!headFound && p[i] == ' ')
            headPos++;
        else
            headFound = true;

        if (!tailFound && is_tail_blank(p[len - i - 1]))
            tailPos++;
        else
            tailFound = true;
    }
}

double atof(const char * p)
{
    if (p == NULL) throw "p as null";

    int head = 0;
    int bottom = 0;
    removeblank(p, head, bottom);
    int len = strlen(p) - head - bottom;
    if (len == 0) throw "p is zero length";

    len += head;
    bool is_negative = p[head] == '-';
    bool is_dot = false;
    double franction = 0;
    int integer = 0;
    double percentage = 1.0;

    for (int i = is_negative ? head + 1 : head; i < len; i++)
    {
        if (p[i] == '.')
        {
            is_dot = true;
            continue;
        }
        
        if (is_dot)
        {
            percentage *= 0.1;
            franction += toInt(p[i]) * percentage;
        }
        else
        {
            integer *= 10;
            integer += toInt(p[i]);
        }
    }

    return ((double)integer + franction)*(is_negative ? -1 : 1);
}