#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//6-я практическая 2-й и 4-й варианты

int main() {

    srand(time(NULL));
    int n = 100, m = 100;
    int** arr1;
    int** arr2;
    int* mass1;
    int* mass2;
    arr1 = (int **) calloc(n, sizeof(int *));
    mass1 = (int *) calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) {
        mass1[i] = rand() % 10 + 3;
        printf("Длина %i-й строки: %d", i + 1, mass1[i]);
        //scanf("%d", &mass[i]);
        arr1[i] = (int *) calloc(mass1[i], sizeof(int));
        for (int j = 0; j < mass1[i]; j++) {
            arr1[i][j] = rand() % 10 + 1;
            //scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
    printf("Первый массив: \n");
    for (int i = 0; i < n; i++) {
        printf("%i-я: ", i + 1);
        for (int j = 0; j < mass1[i]; j++) {
            printf("%4d", arr1[i][j]);
        }
        printf("\n");
        free(arr1[i]);
    }

    printf("\n");

    arr2 = (int **) malloc(m * sizeof(int *));
    mass2 = (int *) malloc(m * sizeof(int));
    for (int i = 0; i < m; i++) {
        mass2[i] = rand() % 10 + 3;
        printf("Длина %i-й строки: %d", i + 1, mass2[i]);
        //scanf("%d", &mass[i]);
        arr2[i] = (int *) malloc(mass2[i] * sizeof(int));
        for (int j = 0; j < mass2[i]; j++) {
            arr2[i][j] = rand() % 10 + 1;
            //scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
    printf("Второй массив: \n");
    for (int i = 0; i < m; i++) {
        printf("%i-я: ", i + 1);
        for (int j = 0; j < mass2[i]; j++) {
            printf("%4d", arr2[i][j]);
        }
        printf("\n");
        free(arr2[i]);
    }
    free(arr1);
    free(arr2);
    free(mass1);
    free(mass2);

    printf("\n/////////////////////////////\n\n");

    n = 200; m = 50;
    arr1 = (int **) calloc(n, sizeof(int *));
    mass1 = (int *) calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) {
        mass1[i] = rand() % 10 + 3;
        printf("Длина %i-й строки: %d", i + 1, mass1[i]);
        //scanf("%d", &mass[i]);
        arr1[i] = (int *) calloc(mass1[i], sizeof(int));
        for (int j = 0; j < mass1[i]; j++) {
            arr1[i][j] = rand() % 10 + 1;
            //scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
    printf("Увеличенный первый массив: \n");
    for (int i = 0; i < n; i++) {
        printf("%i-я: ", i + 1);
        for (int j = 0; j < mass1[i]; j++) {
            printf("%4d", arr1[i][j]);
        }
        printf("\n");
        free(arr1[i]);
    }

    printf("\n");

    arr2 = (int **) malloc(m * sizeof(int *));
    mass2 = (int *) malloc(m * sizeof(int));
    for (int i = 0; i < m; i++) {
        mass2[i] = rand() % 10 + 3;
        printf("Длина %i-й строки: %d", i + 1, mass2[i]);
        //scanf("%d", &mass[i]);
        arr2[i] = (int *) malloc(mass2[i] * sizeof(int));
        for (int j = 0; j < mass2[i]; j++) {
            arr2[i][j] = rand() % 10 + 1;
            //scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
    printf("Уменьшенный второй массив: \n");
    for (int i = 0; i < m; i++) {
        printf("%i-я: ", i + 1);
        for (int j = 0; j < mass2[i]; j++) {
            printf("%4d", arr2[i][j]);
        }
        printf("\n");
        free(arr2[i]);
    }
    free(arr1);
    free(arr2);
    free(mass1);
    free(mass2);

    return 0;
}
