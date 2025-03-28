#include <cstdio>
#include "cpp_entry.hpp"
#include "test.hpp"
#include "etl/string.h"

void cpp_entry()
{
    std::printf("---\n");
    std::printf("Hello from C++\n");

    Test t{42};

    t.say_hello();

    etl::string<32> msg{"Hello from etl"};
    std::printf("%s\n", msg.c_str());
}