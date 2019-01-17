#include <stdio.h>
struct point
{
    int x;
    int y;
};
int main()
{
    int index = 0;
    struct point arr[100];
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
            printf("请输入位置坐标\n");
            int x;
            int y;
            scanf("%d", &x);
            scanf("%d", &y);

            arr[index].x = x;
            arr[index].y = y;
            index++;

            printf("添加成功，回车继续\n");
            char xx;
            scanf("%c", &xx);
            scanf("%c", &xx);
        }
        if (code == 2)
        {
            printf("确认删除最后一个位置坐标\n");

            if (index >= 1)
            {
                index--;
                printf("删除成功，回车继续");
                char xx;
                scanf("%c", &xx);
                scanf("%c", &xx);
            }
            else
            {
                printf("没有车辆位置，删除失败");
                char xx;
                scanf("%c", &xx);
                scanf("%c", &xx);
            }
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