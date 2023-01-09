/*
問題描述：
試寫一個程式，將陣列的內容反轉，舉例來說，如果陣列的內容是：30,20,10,5,34，你的程式必須將陣列內容改為：34,5,10,20,30

輸入說明：
隨意輸入六個數字。

輸出說明：
印出反轉後的內容。

範例：

Sample Input:
30 20 10 5 34 44

Sample Output:
44 34 5 10 20 30
*/

#include <stdio.h>

int main()
{
    int i;
    int list[100];

    for(i = 0 ; i < 6; i++)
    {
        scanf("%d", &list[i]);
    }

    for(i = 5 ; i >= 0; i--)
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
