#include <iostream>
#include <boost/format.hpp>

int main(int argc, const char **argv) {
    if (argc != 2)
    {
        std::cerr << "USAGE: proj-1 number" << std::endl;
        std::exit(1);
    }

    auto n = static_cast<int32_t>(std::stoi(argv[1]));
    for (int32_t i = 0; i < n; ++i) {
        auto s = boost::format("STRING #%1%") % i;
        std::cout << s << std::endl;
    }
}
