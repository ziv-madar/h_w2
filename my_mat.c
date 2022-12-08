#include <stdio.h>
#include <math.h>
#define N 10

float arr[N][N];

void print_arr() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%f ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void fix_matrix() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (arr[i][j] == 0 && i != j)
                arr[i][j] = INFINITY;
        }
    }
}

void floidwarshel() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                if (arr[j][k] > arr[j][i] + arr[i][k]) {
                    arr[j][k] = arr[j][i] + arr[i][k];
                }
            }
        }
    }
}

void A () {
    for (int cols = 0 ; cols < N ; cols++) {
        for (int row = 0; row < N; row++) {
            scanf("%f", &arr[cols][row]);
        }
    }
    fix_matrix();
    floidwarshel();
}

int B(int i, int j) {
    float res = arr[i][j];
    return (res < INFINITY && res > 0);
}

int C(int i, int j) {
    return B(i,j) ? arr[i][j] : -1;
}
