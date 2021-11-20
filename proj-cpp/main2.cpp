#include <cassert>
#include <iostream>
#include <cinttypes>

#define STRLN(s) (sizeof(s) - 1)

#define INT32_MAX_LEN STRLN("-2147483648")

int main(int argc, const char **argv) {
    if (argc != 2)
    {
        std::cerr << "USAGE: proj-1 number" << std::endl;
        std::exit(1);
    }

    auto n = static_cast<int32_t>(std::stoi(argv[1]));
    assert(n > 0);

#define PREFIX "STRING #"

    char s[STRLN(PREFIX) + INT32_MAX_LEN + 1] = PREFIX;
    for (int32_t i = 0; i < n; ++i)
    {
        sprintf(s + STRLN(PREFIX), "%" PRIi32, i);
        std::cout << s << std::endl;
    }

#undef  PREFIX

    return 0;
}
