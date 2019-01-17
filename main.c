#include <stdio.h>

int main()
{

    printf("欢迎进入专车管理系统\n");

    while (1)
    {
        printf("1--添加车辆位置\n");
        printf("2--删除车辆位置\n");
        printf("3--显示全部车辆位置\n");
        printf("4--返回离我位置的最近车辆\n");
        printf("5--退出");

        printf("请输入相应的功能编码\n");
        int code;
        scanf("%d", &code);

        if (code == 1)
        {
            
        }
         if (code == 2)
        {
            
        }
         if (code == 3)
        {
            
        }
         if (code == 4)
        {
            
        }
         if (code == 5)
        {
            printf("确认退出，回车继续\n");
            break;
        }
    }

    return 0;
}