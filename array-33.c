/*
問題描述：
有一矩陣 N,M ，將其利用轉置方法改變矩陣。

輸入說明
輸入資料第一列為矩陣大小， N 、 M ，然後輸入矩陣數值。若 N 、 M 輸入 0 則結束程式。

輸出說明
得到轉置矩陣。

Sample

2 3

2 1 3

8 7 9


2 8

1 7

3 9


3 3

1 2 3

8 4 9

1 0 3


1 8 1

2 4 0

3 9 3


5 5

1 1 0 0 0

0 0 0 1 1

1 0 1 0 1

0 1 0 1 0

1 0 1 0 0


1 0 1 0 1

1 0 0 1 0

0 0 1 0 1

0 1 0 1 0

0 1 1 0 0
*/

#include <stdio.h>

int main()
{
    int N, M, i, j;
    int map[100][100];

    if(scanf("%d", &N) != 0 && scanf("%d", &M) != 0)
    {
        for(i = 0; i < N; i++)
        {
            for(j = 0; j < M; j++)
            {
                scanf("%d", &map[i][j]);
            }
        }

        for(i = 0; i < M; i++)
        {
            for(j = 0; j < N; j++)
            {
                if(j == N-1)
                {
                    printf("%d", map[j][i]);
                    break;
                }
                printf("%d ", map[j][i]);
            }
            printf("\n");
        }
    }


    return 0;
}
