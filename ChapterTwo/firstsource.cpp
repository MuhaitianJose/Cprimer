#include "firstsource.h"
#include <iostream>

using namespace std;

FirstSource::FirstSource()
{

}
/**
 * @brief FirstSource::exercisesOne
 * 打印姓名，地址
 */
void FirstSource::exercisesOne(){
    string name="Muhaitian";
    string address="guangdong, shenzhen City, baoan";
    cout<<"Name: " <<name <<endl
       <<"Address: " << address << endl;

}
/**
 * @brief FirstSource::exercisesTwo
 * 它要 求 用户 输入 一个 以 long 为 单位 的 距离，
 * 然后 将它 转换 为 码（ 一 long 等于 220 码）。
 */
void FirstSource::exercisesTwo(){
    long unitM = 0;
    const int  distanceM = 220;
    cout << "input unit distance: "<<endl;
    cin >>unitM;
    cout<<"distance: "<<unitM*distanceM<<endl;
}
/**
 * @brief FirstSource::exercisesThree
 * 编写 一个 C++ 程序， 它使用3个用户定义的函数（包括main( )），
 *  并生成下面的输出：
 * Three blind mice
 * Three blind mice
 * See how they run
 * See how they run
 */
void FirstSource::exercisesThree(){
    printfMice();
    printfMice();
    printfRun();
    printfRun();
}


/**
 * @brief FirstSource::exercisesFour
 * 编写一个程序，让用户输入其年龄，然后显示该年龄包含多少个月，如下所示：
 * Enter your age:29
 */
void FirstSource::exercisesFour(){
    int age=0;
    const int month = 12;
    cout<<"Enter your age:";
    cin >>age;
    cout<<"Total months:"<<age*month<<endl;
}

/**
 * @brief FirstSource::exercisesFive
 * 编写一个程序，其中的main()调用一个用户定义的函数（以摄氏温度值为参数，
 * 并返回相应的华氏温度值）。该程序按下面的格式要求用户输入摄氏温度值，
 * 并显示结果：
 * Please enter a Celsius value：20
 * 20 degrees Celsius is 68 degrees Fahrenheit.
 */
void FirstSource::exercisesFive(){
    int Celsius = 0;
    cout<<"Please enter a Celsius value: ";
    cin>>Celsius;
    double Fahrenheit = 1.8*Celsius+32.0;
    cout<< Celsius
        <<" degrees Celsius is "
       <<Fahrenheit
      <<" degrees Fahrenheit"<<endl;

}

/**
 * @brief FirstSource::exercisesSix
 * 编写一个程序，其main()调用一个用户定义的函数
 *（以光年值为参数，并返回对应天文单位的值）。
 * 该程序按下面的格式要求用户输入光年值，并显示结果：
 * Enter the number of light years:4.2
 * 4.2 light years = 265608 astronomical units.
 */
void FirstSource::exercisesSix(){
    double lightYears = 0;
    double astronomicalUnits = 63240;
    cout <<"Enter the number of light years:";
    cin>>lightYears;
    cout<<lightYears
       <<" light years ="
       << lightYears*astronomicalUnits
       <<" astronomical units";

}

/**
 * @brief FirstSource::exercisesSeven
 * 编写一个程序，要求用户输入小时数和分钟数。在main()函数中，
 * 将这两个值传递给一个void函数，后者以下面这样的格式显示这两个值：
 * Enter the number of hours:9
 * Enter the number of minutes:28
 * Time: 9:28
 */
void FirstSource::exercisesSeven(){
    int hours = 0;
    int minutes = 0;
    cout<<"Enter the number of hours:";
    cin>>hours;
    cout<<"Enter the number of minutes:";
    cin>>minutes;
    cout<<"Time:"
        <<hours
        <<" : "
        <<minutes;
}

void FirstSource::printfMice(){
    cout<<"Three blind mice"<<endl;
}
void FirstSource::printfRun(){
    cout<<"See how they run"<<endl;
}










