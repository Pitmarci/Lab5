/* Task description:
Try the following program, what output do you expect? What do you get, why?



comment this and uncomment the next to proceed to the next part
#include <stdio.h>

int main(void)
{
    double n = 5;
    double t[10];
    int a = 1, b = 2, c = 3;

    printf("a=%d\nb=%d\nc=%d\n", a, b, c);

    indexing out of bounds 
    t[-1] = 0.2;
    t[10] = 0.3;
    printf("\n");

    printf("a=%d\nb=%d\nc=%d\n", a, b, c);

    return 0;
}


Try the following program. What does while (true) mean?
*/

#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int array[10], i;

    for (i = 0; i < 10; i = i + 1)
        array[i] = i;
    i = 0;
    while (i < 10) {
        printf("%dth element: %d\n", i, array[i]);
        i += 1;
    }

    return 0;
}

