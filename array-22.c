/*
問題描述：
在通訊上面常常會用霍夫曼碼(Huffman Code)的方式來減少編碼的長度，但是要使用霍夫曼碼前，必須先知道字母出現的頻率，現在請你寫一個程式，用來統計字母(不分大小寫)出現的次數，以方便編碼之用。

輸入說明：
輸入一行英文字。

輸出說明：
各字母出現的次數，第1個數字代表A出現的次數，第2個數字代表B出現次出，依此類推，第26個數字代表Z出現的次數。各數字間用一個空白間隔，最後一個數字後面沒有空白。

範例：

Sample Input
No pain,no gain!

Sample Output
2 0 0 0 0 0 1 0 2 0 0 0 0 4 2 1 0 0 0 0 0 0 0 0 0 0
*/

#include <stdio.h>

int main()
{
    int i;
    int times[30];
    char list[10000];

    for(i = 0 ; i < 26; i++)
    {
        times[i] = 0;
    }

    gets(list);

    for(i = 0 ; list[i] != '\0'; i++)
    {
        if(list[i] == 'a' || list[i] == 'A')
        {
            times[0]++;
        }
        else if(list[i] == 'b' || list[i] == 'B')
        {
            times[1]++;
        }
        else if(list[i] == 'c' || list[i] == 'C')
        {
            times[2]++;
        }
        else if(list[i] == 'd' || list[i] == 'D')
        {
            times[3]++;
        }
        else if(list[i] == 'e' || list[i] == 'E')
        {
            times[4]++;
        }
        else if(list[i] == 'f' || list[i] == 'F')
        {
            times[5]++;
        }
        else if(list[i] == 'g' || list[i] == 'G')
        {
            times[6]++;
        }
        else if(list[i] == 'h' || list[i] == 'H')
        {
            times[7]++;
        }
        else if(list[i] == 'i' || list[i] == 'I')
        {
            times[8]++;
        }
        else if(list[i] == 'j' || list[i] == 'J')
        {
            times[9]++;
        }
        else if(list[i] == 'k' || list[i] == 'K')
        {
            times[10]++;
        }
        else if(list[i] == 'l' || list[i] == 'L')
        {
            times[11]++;
        }
        else if(list[i] == 'm' || list[i] == 'M')
        {
            times[12]++;
        }
        else if(list[i] == 'n' || list[i] == 'N')
        {
            times[13]++;
        }
        else if(list[i] == 'o' || list[i] == 'O')
        {
            times[14]++;
        }
        else if(list[i] == 'p' || list[i] == 'P')
        {
            times[15]++;
        }
        else if(list[i] == 'q' || list[i] == 'Q')
        {
            times[16]++;
        }
        else if(list[i] == 'r' || list[i] == 'R')
        {
            times[17]++;
        }
        else if(list[i] == 's' || list[i] == 'S')
        {
            times[18]++;
        }
        else if(list[i] == 't' || list[i] == 'T')
        {
            times[19]++;
        }
        else if(list[i] == 'u' || list[i] == 'U')
        {
            times[20]++;
        }
        else if(list[i] == 'v' || list[i] == 'V')
        {
            times[21]++;
        }
        else if(list[i] == 'w' || list[i] == 'W')
        {
            times[22]++;
        }
        else if(list[i] == 'x' || list[i] == 'X')
        {
            times[23]++;
        }
        else if(list[i] == 'y' || list[i] == 'Y')
        {
            times[24]++;
        }
        else if(list[i] == 'z' || list[i] == 'Z')
        {
            times[25]++;
        }
    }

    for(i = 0 ; i < 26; i++)
    {
        if(i == 25)
        {
            printf("%d", times[i]);
            break;
        }
        printf("%d ", times[i]);
    }
    printf("\n");

    return 0;
}
