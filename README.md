# colors
An easy way to use custom colors with printf in C.

> Only tested on Linux.

```c
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
```

```bash
gcc *.c -std=c99 -Wall -Werror -Wextra -pedantic
```

will produce:

![image](https://user-images.githubusercontent.com/44167150/113402660-a90cb000-93a5-11eb-8ede-c2ee16f8791e.png)
