/*
問題描述：
利用指標傳遞陣列到函數，完成
1. 函數 reverse ，在函數中，陣列的值按反序排列。
2. 函數 display ，顯示輸入的陣列。

輸入說明：
在 reverse 函數中，你需要宣告一個臨時的陣列，以存放反序的陣列。輸入 10 個整數，僅一筆測資。

輸出說明：
輸出應為倒反的 10 個整數。

範例：

4 -9 3 7 -1 0 -8 -2 6 5

5 6 -2 -8 0 -1 7 3 -9 4
*/

#include <stdio.h>

int main()
{
    int i;
    int list[100];

    for(i = 0 ; i < 10; i++)
    {
        scanf("%d", &list[i]);
    }

    for(i = 9 ; i >= 0; i--)
    {
        if(i == 0)
        {
            printf("%d", list[i]);
            break;
        }
        printf("%d ", list[i]);
    }
    printf("\n");

    return 0;
}
