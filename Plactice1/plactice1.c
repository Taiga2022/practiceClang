#include <stdio.h>
#include <string.h>

int main(void)
{
    char question[2][25] = {"りんごの色は？", "バナナの色は？"};
    char ans[2][10] = {"赤", "黄色"};
    int count = 0;

    for (int i = 0; i < 2; i++) 
    {
        printf("%s", question[i]);
        char answer[10]; 
        scanf("%s", answer);

        if (strcmp(ans[i], answer) == 0) {
            printf("%s\n", "正解です");
            count += 1;
        } else {
            printf("%s\n", "不正解です");
        }
    }

    printf("あなたの正解数は%dです。\n", count);
    return 0;
}
