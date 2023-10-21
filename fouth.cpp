#include <iostream>
#include <string>
    using namespace std;
    // int main(){
    //switch语句
    // cout<<"请给电影打分"<< endl;
    // int score = 0;
    // cin  >> score;
    // cout<<"您打的分数为："<<score<<endl;
    // 
    // switch(score){
        // case10:
    // cout<<"您认为是经典电影"<<endl;
        // break;//退出当前分支
        // 
        // case9:
    /*cout<<"您认为是经典电影"<<endl;
        break;
        case8:
    cout<<"您认为电影非常好"<<endl;
        break;
        case7:
    cout<<"您认为电影非常好"<<endl;
        break;
        case6:
    cout<<"您认为电影一般"<<endl;
        break;
        case5:
    cout<<"您认为电影非常一般"<<endl;
        break;
        default:
        cout<<"您认为这是一个烂片"<<endl;

    }
    } //if和switch区别
      //switch缺点，判断时候只能是整型或字符型，不可以是一个区间
      //switch优点，结构清晰，执行效率高。
      //*switch里面如果没有break，那么程序会一直执行。*/
     /*2int main()
     {
    int arr [5]={1,3,2,5,4};
    cout << "数组逆置前：" << endl;
    for (int i =0;i<5;i++)
    {
        cout << arr[i] << endl;
    }
    int start = 0;
    int end =sizeof(arr)/sizeof(arr[0])-1;
    while (start<end)
    {int temp=arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;end--;
    }
    cout << "数组逆置后：" <<endl;
     for (int i =0;i<5;i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
     } */
     //冒泡题目
     /*int main(int argc, const char** argv)  
     { 
     int arr[9] ={4,2,8,0,5,7,1,3,9};
     cout << "排序前：" <<endl;
     for(int i =0;i<9;i++)
     {
        cout << arr[i] << " ";
     }
     cout << endl;
    //开始冒泡排序
    //总共排序轮数为：元素个数-1
    for (int i=0;i<9-1;i++)
    {
        for (int j=0;j<i-1;j++)
        {
            //如果第一个数字，比第二个数字大，交换两个数字
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr [j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
    //排序后结果
    cout <<"排序后结果："<<endl;
    for(int i =0;i<9;i++)
     {
        cout << arr[i] << " ";
     }
     cout << endl;
         return 0;
     }*/
     //函数题目值传递
     /*void swap(int num1,int num2)//声明一个函数
     //函数声明时，不需要返回值，可以不写return；
     {
        cout << " 交换前：" << endl;
        cout << " num1 = " << num1 <<endl;
        cout << " num2 = " << num2 <<endl;
        
        int temp = num1 ;
        num1 = num2;
        num2 = temp;

        cout << "交换后：" << endl;
        cout << " num1 = "<< num1 <<endl;
        cout << " num2 = "<< num2 <<endl;
     }
      int main()
      {
        int a = 10;
        int b = 20;

        swap (a,b);//调用创建的函数swap

        cout << "mian中的a=" <<a<<endl;
        cout << "mian中的b=" <<b<<endl;

        system("pause");
      }*/
     

       //声明可以多次，定义只能一次
       //声明
       /*int max(int a,int b);
       int max(int a,int b);
       //定义
       int max(int a,int b)
       {
        return a>b?a:b;
       }

       int main()
       {
        int a =100;
        int b =200;
        cout <<max(a,b)<<endl;
        system("pause");
        return 0;
       }*/


       //结构体定义
       /*struct student
       {
        //成员列表
        string name;//姓名
        int age;//年龄
        int score;//分数
       }s3;//结构体变量创建方式3

       int main()
       {
        //结构体变量创建方式1
        struct student s1;//struct定义变量时可以省略struct

         s1.name = "张三";//结构体访问变量用.
         s1.age = 18;
         s1.score =100;

         cout << "姓名：" <<s1.name<<"年龄："<<s1.age<<"分数："<<s1.score<<endl;
        //结构题变量创建方式2
        struct student s2 = {"变量",19,60};
        cout << "姓名：" <<s2.name<<"年龄："<<s2.age<<"分数："<<s2.score<<endl;
        
        s3.name = "王五";
        s3.age = 18;
        s3.score = 50;
        cout << "姓名：" <<s3.name<<"年龄："<<s3.age<<"分数："<<s3.score<<endl;
        
        return 0;
       }
       */


//常量指针和指针常量，const既修饰常量又修饰指针
   /* int main()
      {
        int a = 10;
        int b = 10;

        const int * p1 = &a;
        p1 = &b;
       // *p1 = 100 错误

       int * const p2 = &a;
       //p2 = &b;
       *p2 = 20;

       const int * const p3 = &a;
       //指针指向和指针指向的值均不可更改
     //  p3 = &b;
      // *p3 = 30;
    
    return 0;
      }*/  



//利用指针访问数组元素
/*int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};

    
  
     int * p2 = arr;

    for(int i = 0;i<10;i++)
    {
        //利用指针遍历数组
        cout << *p2 << endl;
        p2++;

        
    }
    return 0;
}
    */




   // 指针与数组函数
   /*void swap2(int *p1,int *p2)
     {
        int temp = *p1;
        *p1 = *p2;
        *p2 = temp;
     }
     int main(){
        int a = 10;
        int b = 20;
        swap2(&a,&b);
        
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;

        return 0;
     }
*/




//指针配合数组和函数
/*//冒泡排序函数 参数1 数组的首地址 参数2 数组长度
void bubbleSort(int * arr,int len)
{
    for (int i = 0; i < len-1;i++)
    {
        for (int j = 0; j < len -i -1;j++)
        // 如果j>j+1的值，交换数字
        if (arr[j]>arr[j+1])
        {
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }

    }
}
     //打印数组
     void printArray(int * arr, int len)
     {
        for(int i= 0;i<len;i++)
        {
            cout << arr[i] <<endl;
        }
     }
     int main(){
        int arr[10]={4,3,6,9,1,2,10,8,7,5};

        // 数组长度
        int len = sizeof(arr)/sizeof(arr[0]);
        //创建函数，实现冒泡排序
        bubbleSort(arr,len);
        //打印排序后的数组
        printArray(arr,len);

        return 0;
     }*/
    
    