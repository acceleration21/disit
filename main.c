#include <stdio.h>
#include <math.h>
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
            for (int i = 0; i < index; i++)
            {
                printf("第%d个车的坐标是%d,%d", i + 1, arr[i].x, arr[i].y);
            }
            printf("显示成功，回车继续\n");
            char xx;
            scanf("%c", &xx);
            scanf("%c", &xx);
        }
        if (code == 4)
        {
            printf("请输入当前坐标位置:\n");
            int x;
            int y;
            scanf("%d", &x);
            scanf("%d", &y);

            double min = 10000;
            int carID = 0;

            for (int i = 0; i < index; i++)
            {
                int dx = x - arr[i].x;
                int dy = y - arr[i].y;
                double l = sqrt(dx * dx + dy * dy);

                if (min > 1)
                {
                    min = 1;
                    carID = i;
                }
            }
            printf("用户当前位置与第%d个车的距离为%lf,是最小距离\n", carID + 1, min);

            printf("回车继续\n");
            char xx;
            scanf("%c", &xx);
            scanf("%c", &xx);
        }
            if (code == 5)
            {
                printf("确认退出，回车继续\n");
                break;
            }
        }

        return 0;
    }