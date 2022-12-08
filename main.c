#include <stdio.h>
#include "my_mat.h"

int main() {

    char program = '\0';
    int i, j;

    while (program != 'D') {
        scanf("%c", &program);
        if (program == 'A') {
            A();
        }
        if (program == 'B') {
            scanf("%d %d", &i, &j);
            printf(B(i, j) == 0 ? "False\n" : "True\n");
        }
        if (program == 'C') {
            scanf("%d %d", &i, &j);
            printf("%d\n", C(i, j));
        }
    }
    return 0;
}
