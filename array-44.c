/*
問題描述：
請做一個程式，判斷輸入的字串是否有迴文，若有迴文，則顯示 YES ；若無迴文，則顯示 NO 。

輸入說明：
請輸入連續字元例如： 12345, abcba, god, heyman, wow，判斷是否迴文。

輸出說明：
若程式判定為迴文時則會顯示 YES, 若不為迴文則回傳為 NO 。

範例：

12345

NO

abcba

YES

god

NO
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int len, test = 1, i, j;
    char list[100];

    gets(list);

    len = strlen(list);

    j = len-1;
    for(i = 0 ; i < len; i++)
    {
        if(list[i] != list[j])
        {
            test = 0;
            break;
        }
        j--;
    }

    if(test == 0)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }

    return 0;
}
