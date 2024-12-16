#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand((unsigned int)time(NULL));
    int count = 0;
    int ran=rand();
    printf("%d",ran);
    while(1)
    {
        printf("数字を予想して入力してください\n");
        int answer; 
        scanf("%d", &answer);
        if(answer>ran){
            printf("もう少し小さいです \n");
        }else if(answer<ran){
            printf("もう少し大きいです \n");
        }else{
            printf("正解です \n");
            printf("あなたの正解数は%dです。\n", count);
            break;
        };
        count+=1;
    }
    return 0;
}
