#include <stdio.h>

struct animal {
    char *name;
    int leg_count;
};

int main(void)
{
    struct animal b;
    b.name = "goat";
    b.leg_count = 4;

    printf("%s has %d legs\n", b.name, b.leg_count);
    return 0;
}