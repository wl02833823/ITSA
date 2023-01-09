/*
問題描述：
每次考完試，通常都是老師、助教惡夢的開始，除了要改考卷以外，統計成績也是一件麻煩的事，現在請寫一個程式可以用來處理統計成績的問題，須統計的科目包含：國文、英文、數學，裡面要可以計算全班同學的平均分數，以及各科平均分數的函式。假設有 x 個人考國文、英文、數學，則全體平均為全部成績相加除以 3*x ，國文成績為所有國文成績相加除以 x ，英文成績為所有英文成績相加除以 x ，數學成績為所有數學成績相加除以 x 。

輸入說明：
第一列輸入一個正整數 n 。其後有 n 列，每一列代表學生國文、英文，數學成績。

輸出說明：
只有一列表全體平均、國文平均、英文平均、數學平均，分數皆採四捨五入算至小數點後1位。

範例：

Sample Input
2

10 20 30

60 70 80

Sample Output
45.0 35.0 45.0 55.0
*/

#include <stdio.h>

int main()
{
    int n, i;
    float sum = 0, cn_sum = 0, en_sum = 0, math_sum = 0;
    float cn[100], en[100], math[100];

    scanf("%d", &n);

    for(i = 0 ; i < n; i++)
    {
        scanf("%f %f %f", &cn[i], &en[i], &math[i]);
        cn_sum = cn_sum + cn[i];
        en_sum = en_sum + en[i];
        math_sum = math_sum + math[i];
    }
    sum = cn_sum + en_sum + math_sum;

    printf("%.1f %.1f %.1f %.1f\n", sum/(3*n), cn_sum/n, en_sum/n, math_sum/n);

    return 0;
}
