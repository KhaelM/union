#include <stdio.h>

typedef union Values
{
    char first;
    char second;
    char third[2];
    int great;
} Values;

int main(int argc, char const *argv[])
{
    Values v;
    v.first = 'c';
    v.second = 'd';
    v.third[1] = 'b';
    v.third[0] = 'a';
    v.great = 125;

    printf("%c", v.third[1]);

    return 0;
}
