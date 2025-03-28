#include <cstdio>
#include "cpp_entry.hpp"
#include "test.hpp"
#include "etl/string.h"
#include "etl/vector.h"

void cpp_entry()
{
    std::printf("---\n");
    std::printf("Hello from C++\n");

    Test t{42};

    t.say_hello();

    etl::string<32> msg{"Hello from etl"};
    std::printf("%s\n", msg.c_str());

    etl::vector<int, 3> vec{};
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    for(const auto val: vec)
    {
        std::printf("%i\n", val);
    }

}