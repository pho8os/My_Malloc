
#include "My_malloc.c"


void f()
{
    char *test = my_malloc(55, 1);
}

void a()
{
    system("leaks main");
}

int main()
{
    atexit(a);
    char *s = my_malloc(20, 1);
    s = my_malloc(50, 1);
    f();
    my_malloc(0, 0);
}