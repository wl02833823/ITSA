/*
問題描述：
12 生肖有 ' 鼠 ',' 牛 ',' 虎 ',' 兔 ',' 龍 ',' 蛇 ', ' 馬 ',' 羊 ',' 猴 ',' 雞 ',' 狗 ',' 豬 ' ，每年輪一生肖， 2010 年為虎年，請設計程式，根據輸入之西元年，轉成生肖輸出。

輸入說明：
請輸入西元年，並計算出生肖。

輸出說明：
依照生肖標準，將西元年轉成生肖輸出。

鼠(rat)、牛(ox)、虎(tiger)、兔(rabbit)、龍(dragon)、蛇(snake)、馬(horse)、羊(sheep)、猴(monkey)、雞(rooster)、狗(dog)、豬(pig)

範例：

2010

tiger

2008

rat

1961

ox
*/

#include <stdio.h>

int main()
{
    int year;

    scanf("%d", &year);

    if(year % 12 == 4)
    {
        printf("rat\n");
    }
    else if(year % 12 == 5)
    {
        printf("ox\n");
    }
    else if(year % 12 == 6)
    {
        printf("tiger\n");
    }
    else if(year % 12 == 7)
    {
        printf("rabbit\n");
    }
    else if(year % 12 == 8)
    {
        printf("dragon\n");
    }
    else if(year % 12 == 9)
    {
        printf("snake\n");
    }
    else if(year % 12 == 10)
    {
        printf("horse\n");
    }
    else if(year % 12 == 11)
    {
        printf("sheep\n");
    }
    else if(year % 12 == 0)
    {
        printf("monkey\n");
    }
    else if(year % 12 == 1)
    {
        printf("rooster\n");
    }
    else if(year % 12 == 2)
    {
        printf("dog\n");
    }
    else if(year % 12 == 3)
    {
        printf("pig\n");
    }

    return 0;
}
