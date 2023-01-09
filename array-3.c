/*
問題描述：
試撰寫一個程式，宣告一個 1 維的整數陣列，並計算元素中所有元素的立方和。

輸入說明：
任意輸入六個整數。

輸出說明：
輸出所有元素的立方和。

範例：

Sample Input:
30 20 10 5 34 44

Sample Output:
160613
*/

#include <stdio.h>

int main()
{
    int sum = 0, i;
    int list[100];

    for(i = 0 ; i < 6; i++)
    {
        scanf("%d", &list[i]);
        sum = sum + list[i]*list[i]*list[i];
    }

    printf("%d\n", sum);

    return 0;
}
