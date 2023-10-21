#include <iostream>
#include <iomanip>
    using namespace std;
    int main(){
     int a = 0;
     int flag =1;
     cout << "请输入一个整数：" << endl;
     cin >> a;
     for ( int i = 2; i < (a/2 + 1) && (flag != 0); i++)
     {
        if ( a % i == 0)
        {
            cout << "他不是素数. . ." << endl;
            flag = 0;
        }
     }
     if (flag == 1)
     {
        cout << "这个数是素数。" <<endl;

     }
     return 0;
    }
