#include <stdio.h>
#define wait getche()
void main()
{
    int r;
    printf("Upanshu\n");
#undef wait getche();
    wait();
    for (r = 1; r <= 5; r++)
        printf("sqr=%d\n", r);
    wait;
}
