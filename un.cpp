#include <iostream>
    using namespace std;
    int main(){
     int score = 0;
     cout<<"请输入高考考试分数："<< endl;
     cin >> score;
     cout << "您输入的分数为："<<score<<endl;
     if(score>600)
     {
        cout << "恭喜您考上一本大学"<<endl;
        if(score>700)
    {
        cout<<"恁能考入北京大学"<<endl;
    }
    else if (score>650)
    {
        cout<<"您能考入清华大学"<<endl;
    }
    else
    {
        cout<<"您能考上人民大学"<<endl;
    }
     
        
     }
     else if (score>500)
     {
        cout<<"恭喜您能考上二本大学"<<endl;
     }
     else if (score>400)
     {
        cout<<"恭喜您考上三本大学" <<endl;
     }
     else{
        cout<<"未考上本科，请再接再厉!"<<endl;
     }
    }
