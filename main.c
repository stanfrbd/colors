#include <stdio.h>

#include "colors.h"

int main(void)
{
    set_red("I'm now Red\n");
    set_green("I'm now Green\n");
    set_yellow("I'm now Yellow\n");
    set_blue("I'm now Blue\n");
    set_purple("I'm now Purple\n");
    set_cyan("I'm now Cyan\n");
    printf("I'm now Default\n");
    print_failed("Failed test\n");
    print_passed("Passed Test\n");
    print_info("This is an info\n");
    return 0;
}
