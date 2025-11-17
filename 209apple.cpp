#include <iostream>
using namespace std;

int main() 
{
    double total_cost = 0.0; 
    int total_apples = 0;    
    int current_day_apples = 3; 
    int day = 1;             

    while (total_apples + current_day_apples <= 100) 
    {
        total_cost += current_day_apples * 0.8;
        total_apples += current_day_apples;
        if (total_apples >= 100) break;
        current_day_apples *= 4;
        day++;
    }

    double average_cost = total_cost / day;
    cout << "每天平均花费: " << average_cost << " 元" << endl;

    return 0;
}