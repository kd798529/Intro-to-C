#include <stdio.h>
#include <time.h>

struct animal {
    char *name;
    int leg_count;
    time_t date_of_birth;
};

void print_animal(struct animal x)
{
    printf("%s has %d legs\n", x.name, x.leg_count);
}

void set_name(struct animal *p, char *name)
{
    //(*p).name = name;
    p->name = name; // -> is syntactic sugar
}

int main(void)
{
    int a;
    struct animal b;
    struct animal c = { .name = "seagull", .leg_count = 2};

    a = 12;

    b.name = "goat";
    b.leg_count = 4;
    b.date_of_birth = time(NULL); // init DOB to now

    print_animal(b);

    set_name(&c, "human");

    print_animal(c);

    return 0;
}