#include <stdio.h>
#include <dirent.h>
#include <stdint.h>

typedef uint64_t b_cnt_t;
static char * c_dir = "/sys";

static b_cnt_t
read_int(const char *prefix, const char *file)
{
    FILE *f;
    b_cnt_t r;
    char p[FILENAME_MAX];

    snprintf(p, sizeof(p), "%s/%s", prefix, file);

    f = fopen(p, "r");
    if (NULL == f)
        throw;

    if (fscanf(f, "%lld\n", &r) != 1)
        throw;

    return r;
}
