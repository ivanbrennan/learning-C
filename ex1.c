#include <stdio.h>

int main(int argc, char *argv[])
{
    puts("Hello world.");
    puts("I'm just starting to learn C.");
    puts("It was supposed to be harder than this.");
    puts("Let's see what the first element of argv[] is:");
    puts(argv[0]);
    puts("Now let's see what the next element is:");
    puts(argv[1]);
    puts("See what happened when we fed `puts' a NULL argument?");
    return 0;
}
