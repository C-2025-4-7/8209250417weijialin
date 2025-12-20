#include <iostream>
using namespace std;

//计算第n天的桃子数量
int peach_count(int day) {
    //第10天只剩1个桃子
    if (day == 10) {
        return 1;
    }
    // 递归关系：第n天的桃子数 = (第n+1天的桃子数 + 1) * 2
    else {
        return (peach_count(day + 1) + 1) * 2;
    }
}

int main() {
    // 计算第一天摘的桃子数量
    int first_day_peaches = peach_count(1);
    cout << "第一天猴子共摘了 " << first_day_peaches << " 个桃子" << endl;
    cout << "\n每天剩余的桃子数：" << endl;

    // 显示每天剩余的桃子数
    for (int day = 1; day <= 10; day++) {
        int peaches = first_day_peaches;

        // 计算第day天的剩余桃子数
        for (int d = 1; d < day; d++) {
            peaches = peaches / 2 - 1;
        }

        cout << "第" << day << "天: ";

        // 第1天到第9天：显示吃了多少和剩余多少
        if (day < 10) {
            int eaten_half = peaches / 2;
            int extra_one = 1;
            int remaining = peaches - eaten_half - extra_one;

            cout << peaches << " 个桃子 -> ";
            cout << "吃了一半(" << eaten_half << "个), ";
            cout << "又多吃1个 -> ";
            cout << "剩余 " << remaining << " 个" << endl;
        }
        // 第10天：只剩1个
        else {
            cout << "只剩 " << peaches << " 个桃子" << endl;
        }
    }

    // 验证递归公式的正确性
    //cout << "验证：" << endl;
    //int peach = 1; 
    //cout << "第10天: " << peach << " 个桃子" << endl;
    //for (int day = 9; day >= 1; day--) {
        //peach = (peach + 1) * 2;
        //cout << "第" << day << "天: " << peach << " 个桃子" << endl;
    //}
    return 0;
}