#pragma once

#include <cstdio>

struct Test
{
    Test(int value): value_{value}
    {
        std::printf("Test ctor\n");
    }

    void say_hello()
    {
        std::printf("Hello world from cpp test: %i\n", value_);
    }

    ~Test()
    {
        std::printf("Test dtor\n");
    }

private:
    int value_;
};