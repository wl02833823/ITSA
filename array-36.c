/*
問題描述：
星座查詢有 " 水瓶 "," 雙魚 "," 牡羊 "," 金牛 " ," 雙子 "," 巨蟹 "," 獅子 "," 處女 " ," 天秤 "," 天蠍 "," 射手 "," 摩羯 "; 請設計程式，根據輸入之月及日期，輸出對應之星座輸出。

1997 年 1 月 21 日 1997 年 2 月 18 日 水瓶

1997 年 2 月 19 日 1997 年 3 月 20 日 雙魚

1997 年 3 月 21 日 1997 年 4 月 20 日 牡羊

1997 年 4 月 21 日 1997 年 5 月 21 日 金牛

1997 年 5 月 22 日 1997 年 6 月 21 日 雙子

1997 年 6 月 22 日 1997 年 7 月 22 日 巨蟹

1997 年 7 月 23 日 1997 年 8 月 23 日 獅子

1997 年 8 月 24 日 1997 年 9 月 23 日 處女

1997 年 9 月 24 日 1997 年 10 月 23 日 天秤

1997 年 10 月 24 日 1997 年 11 月 22 日 天蠍

1997 年 11 月 23 日 1997 年 12 月 21 日 射手

1997 年 12 月 22 日 1998 年 1 月 20 日 摩羯

Aquarius 水瓶座 Leo 獅子座 Pisces 雙魚座 Virgo 處女座 Aries 牡羊座 Libra 天秤座 Taurus 金牛座 Scorpio 天蠍座 Gemini 雙子座 Sagittarius 人馬座 Cancer 巨蠍座 Capricorn 山羊座

輸入說明：
請輸入月及日期。

輸出說明：
依照星座標準，將月及日期轉成星座輸出。

範例：

08 20

Leo

06 24

Cancer

03 13

Pisces
*/

#include <stdio.h>

int main()
{
    int month, day;

    scanf("%d %d", &month, &day);

    if(month == 1)
    {
        if(day >= 21)
        {
            printf("Aquarius\n");
        }
        else
        {
            printf("Capricorn\n");
        }
    }
    else if(month == 2)
    {
        if(day >= 19)
        {
            printf("Pisces\n");
        }
        else
        {
            printf("Aquarius\n");
        }
    }
    else if(month == 3)
    {
        if(day >= 21)
        {
            printf("Aries\n");
        }
        else
        {
            printf("Pisces\n");
        }
    }
    else if(month == 4)
    {
        if(day >= 21)
        {
            printf("Taurus\n");
        }
        else
        {
            printf("Aries\n");
        }
    }
    else if(month == 5)
    {
        if(day >= 22)
        {
            printf("Gemini\n");
        }
        else
        {
            printf("Taurus\n");
        }
    }
    else if(month == 6)
    {
        if(day >= 22)
        {
            printf("Cancer\n");
        }
        else
        {
            printf("Gemini\n");
        }
    }
    else if(month == 7)
    {
        if(day >= 23)
        {
            printf("Leo\n");
        }
        else
        {
            printf("Cancer\n");
        }
    }
    else if(month == 8)
    {
        if(day >= 24)
        {
            printf("Virgo\n");
        }
        else
        {
            printf("Leo\n");
        }
    }
    else if(month == 9)
    {
        if(day >= 24)
        {
            printf("Libra\n");
        }
        else
        {
            printf("Virgo\n");
        }
    }
    else if(month == 10)
    {
        if(day >= 24)
        {
            printf("Scorpio\n");
        }
        else
        {
            printf("Libra\n");
        }
    }
    else if(month == 11)
    {
        if(day >= 23)
        {
            printf("Sagittarius\n");
        }
        else
        {
            printf("Scorpio\n");
        }
    }
    else if(month == 12)
    {
        if(day >= 22)
        {
            printf("Capricorn\n");
        }
        else
        {
            printf("Sagittarius\n");
        }
    }

    return 0;
}
