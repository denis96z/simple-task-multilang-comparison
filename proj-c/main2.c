#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <inttypes.h>

#define STRLN(s) (sizeof(s) - 1)

#define INT32_MAX_LEN STRLN("-2147483648")

int main(int argc, const char **argv)
{
    if (argc != 2)
    {
        fprintf(stderr, "USAGE: proj_c number\n");
        exit(1);
    }

    int32_t n = (int32_t)strtol(argv[1], NULL, 10);
    assert(n > 0);

#define PREFIX "STRING #"

    char s[STRLN(PREFIX) + INT32_MAX_LEN + 1] = PREFIX;
    for (int32_t i = 0; i < n; ++i)
    {
        sprintf(s + STRLN(PREFIX), "%"PRIi32, i);
        puts(s);
    }

#undef  PREFIX

    return 0;
}
