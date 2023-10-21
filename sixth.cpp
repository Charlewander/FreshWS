#include <iostream>
    using namespace std;
    //time系统时间头文件包含
    #include <ctime>

    int  main() {
        //添加随机数种子，；利用当前系统时间生成随机数，防止每次随机数都一样
        srand((unsigned int)time(NULL));
     int num = rand()%100+1 ;//rand()%100+1 生成0+1～99+1 随机数
     cout<< num << endl;

     int val = 0;//玩家输入的数据

     while(1){
        cin >> val;
        if (val > num)
        {
            cout <<"猜测过大" << endl;
        }
        else if (val< num)
        {
            cout << "猜测过小" << endl;
        }
        else
        {
            cout << "恭喜您猜对了" << endl;
            //猜对退出游戏
            break;//输入此关键字来退出当前循环
        }
     }

     cin >> val;
    }