/*
問題描述 ：
統一發票號碼共有八位數，每期開出一組特獎和三組頭獎號碼。特獎為8 位數號碼與特獎號碼相同者，獎金 200 萬元；
頭獎為8 位數號碼與頭獎號碼相同者，獎金 20 萬元；二獎為末 7 位數號碼與頭獎中獎號碼末 7 位相同者，各得獎金 4 萬元；
三獎為末 6 位數號碼與頭獎中獎號碼末 6 位相同者，各得獎金 1 萬元；四獎為末 5 位數號碼與頭獎中獎號碼末 5 位相同者，各得獎金 4 千元；
五獎為末 4 位數號碼與頭獎中獎號碼末 4 位相同者各得獎金 1 千元；六獎為末 3 位數號碼與頭獎中獎號碼末 3 位相同者各得獎金 2 百元。
假設所有獎項均以中獎金額較大的優先，請寫一模擬對獎程式，讀入開獎號碼及統一發票號碼，印出中獎種類及張數，以及中獎總金額。

輸入說明 ：
第一行為一8位整數表示特獎開獎號碼，接下來有三行，每行為一8位整數代表頭獎開獎號碼，第五行為一正整數N（ 1 ≤ N ≤ 100000 ），代表共有N張發票要對獎，之後有N行，每行為一張發票號碼（8位整數）。

輸出說明 ：
輸出各獎項中獎張數於一行，獎項依序排列，自特獎開始，每獎項張數間空一空格，最後空一行後輸出總共中獎金額。

範例 ：

14672884
79807980
85312452
94251069
3
79807980
84556452
15661069

0 1 0 0 0 1 1
201200
*/

#include <stdio.h>

int main()
{
    int special, top1, top2, top3, N, receipt, sum = 0, i;
    int list[7] = {0};

    scanf("%d", &special);
    scanf("%d", &top1);
    scanf("%d", &top2);
    scanf("%d", &top3);
    scanf("%d", &N);

    for(i = 0; i < N; i++)
    {
        scanf("%d", &receipt);

        if(special == receipt)
        {
            list[0]++;
            sum = sum + 2000000;
            continue;
        }
        else if(top1 == receipt || top2 == receipt || top3 == receipt)
        {
            list[1]++;
            sum = sum + 200000;
            continue;
        }
        else if(top1%10000000 == receipt%10000000 || top2%10000000 == receipt%10000000 || top3%10000000 == receipt%10000000)
        {
            list[2]++;
            sum = sum + 40000;
            continue;
        }
        else if(top1%1000000 == receipt%1000000 || top2%1000000 == receipt%1000000 || top3%1000000 == receipt%1000000)
        {
            list[3]++;
            sum = sum + 10000;
            continue;
        }
        else if(top1%100000 == receipt%100000 || top2%100000 == receipt%100000 || top3%100000 == receipt%100000)
        {
            list[4]++;
            sum = sum + 4000;
            continue;
        }
        else if(top1%10000 == receipt%10000 || top2%10000 == receipt%10000 || top3%10000 == receipt%10000)
        {
            list[5]++;
            sum = sum + 1000;
            continue;
        }
        else if(top1%1000 == receipt%1000 || top2%1000 == receipt%1000 || top3%1000 == receipt%1000)
        {
            list[6]++;
            sum = sum + 200;
            continue;
        }
    }

    for(i = 0 ; i < 7; i++)
    {
        if(i == 6)
        {
            printf("%d", list[i]);
            break;
        }
        printf("%d ", list[i]);
    }
    printf("\n");
    printf("%d\n", sum);

    return 0;
}
