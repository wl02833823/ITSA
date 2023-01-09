/*
問題描述 ：
給予一個由1到N的所有整數構成的數列，不依大小排列。 寫一函數檢查此數列是否每個數值只出現一次。

輸入說明 ：
輸入分為兩行，第一行是一個介於1與128間的正整數，代表第二行中數列中的數字個數。
第二行是由空白鍵分隔開的數字序列，不超過128個數。每一個數值介於1到序列數字個數的整數。

輸出說明 ：
若是每個數字剛好只出現一次則輸出1，輸出0表示其中有重複的數字。

範例 ：
Sample Input:
8
1 4 6 2 3 5 8 7

Sample Output:
1
*/

#include <stdio.h>

int main()
{
    int n, repeat = 0, i, j;
    int list[100];

    scanf("%d", &n);

    for(i = 0 ; i < n; i++)
    {
        scanf("%d", &list[i]);
    }

    for(i = 0 ; i < n; i++)
    {
        for(j = 0 ; j < n; j++)
        {
            if(j == i)
            {
                continue;
            }
            if(list[j] == list[i])
            {
                repeat = 1;
                break;
            }
        }
    }

    if(repeat == 1)
    {
        printf("0\n");
    }
    else
    {
        printf("1\n");
    }

    return 0;
}
