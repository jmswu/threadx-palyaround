#include <cstdio>
#include "cpp_entry.hpp"
#include "test.hpp"

void cpp_entry()
{
    std::printf("---\n");
    std::printf("Hello from C++\n");

    Test t{42};

    t.say_hello();
}