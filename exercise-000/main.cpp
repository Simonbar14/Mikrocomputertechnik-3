#include <fmt/chrono.h>
#include <fmt/format.h>

#include "config.h"

int var=10;

int main(int argc, char **argv) {

    
    fmt::print("Hello, {}!\n", tea::PROJECT_NAME);
    fmt::print("Value of var: {} !\n", var);
    fmt::println("Value of argc:{}", argc);


    return 0; /* exit gracefully*/
}
