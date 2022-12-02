#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <conio.h>


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int g;
    printf("Введите номер программы\n");
    scanf("%d", &g);
    switch (g)
    {
    case 1:{
        void create_mtr();
        float A[5][5] = {
                    {4, 7, 14, 65, 100},
                    {54, 76, 8, 3, 97},
                    {13, 4, 35, 2, 77},
                    {32, 6, 56, 32, 1},
                    {34, 33, 98, 77, 5},
                  };
        int i,j;
        printf("Текущий массив\n");
        for(i=0; i<5;i++)
        {
            for (j=0; j<5; j++)
            {
                printf("%f\t", A[i][j]);
            }
            printf("\n");
        }
    int s,sam;
    s = 0;
    sam = 1;
    for (i=0; i<5; i++)
    {

                s = A[i][i];
                sam *= s;


    }
    printf("\nПроизведение диагонали\t%d\n", sam);
    float B[5][5];

    for (i=0; i<5; i++)
    {
        for (j=0; j<5; j++)
        {
            if (i>j)
            {
                B[i][j]=A[i][j]/s;
            }
             if (i<j)
            {
                B[i][j]=s/A[i][j];
            }
        }
    }
    for (i=0; i<5; i++)
    {
        B[i][i]=0;
    }

    printf("Полученный массив\n");

    for(i=0; i<5;i++)
    {
        for (j=0; j<5; j++)
        {
            printf("%f\t", B[i][j]);
        }
        printf("\n");
    }
    break;
   }
    case 2:{
    void create_mtr();
    int M;
    printf("Введите размерность матрицы\n");
    scanf("%d", &M);
    float A[M][M];
    int i,j;
    printf("Введите массив\n");
    for(i=0; i<M;i++)
    {
        for (j=0; j<M; j++)
        {
            scanf("%f", &A[i][j]);
        }
    }
      printf("Текущий массив\n");

for(i=0; i<M;i++)
    {
        for (j=0; j<M; j++)
        {
            printf("%f\t", A[i][j]);
        }
        printf("\n");
    }

  int s,sam;
    s = 0;
    sam = 1;
    for (i=0; i<M; i++)
    {

                s = A[i][i];
                sam *= s;


    }
    printf("\nПроизведение диагонали\t%d\n", sam);
    float B[M][M];

    for (i=0; i<M; i++)
    {
        for (j=0; j<M; j++)
        {
            if (i>j)
            {
                B[i][j]=A[i][j]/s;
            }
             if (i<j)
            {
                B[i][j]=s/A[i][j];
            }
        }
    }
    for (i=0; i<M; i++)
    {
        B[i][i]=0;
    }

    printf("Полученный массив\n");

    for(i=0; i<M;i++)
    {
        for (j=0; j<M; j++)
        {
            printf("%f\t", B[i][j]);
        }
        printf("\n");
    }
    break;
    }
    case 3:{
        srand(time(NULL));

    void create_mtr();
    int M;
    printf("Введите размерность матрицы\n");
    scanf("%d", &M);
    float A[M][M];
    int i,j;
    printf("Данный массив\n");

    for(i=0; i<M;i++)
    {
        for (j=0; j<M; j++)
        {
            A[i][j] = rand()%101;
            printf("%f\t", A[i][j]);
        }
        printf("\n");
    }


  int s,sam;
    s = 0;
    sam = 1;
    for (i=0; i<5; i++)
    {

                s = A[i][i];
                sam *= s;


    }
    printf("\nПроизведение диагонали\t%d\n", sam);
    float B[5][5];

    for (i=0; i<M; i++)
    {
        for (j=0; j<M; j++)
        {
            if (i>j)
            {
                B[i][j]=A[i][j]/s;
            }
             if (i<j)
            {
                B[i][j]=s/A[i][j];
            }
        }
    }
    for (i=0; i<M; i++)
    {
        B[i][i]=0;
    }

    printf("Полученный массив\n");

    for(i=0; i<M;i++)
    {
        for (j=0; j<M; j++)
        {
            printf("%f\t", B[i][j]);
        }
        printf("\n");
    }

        break;
    }
    default:{
        printf("Введите номер программы 1, 2 или 3\n");
        scanf("%d", &g);
    }
    }
   return 0;
}
