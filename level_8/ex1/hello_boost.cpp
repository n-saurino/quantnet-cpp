#include <iostream>
#include <boost/preprocessor/repetition/repeat.hpp>

#define PRINT_HELLO(z, n, text) std::cout << "Hello, Boost! (" << n << ")" << std::endl;

int main() {
    BOOST_PP_REPEAT(5, PRINT_HELLO, "unused argument");
    return 0;
}
