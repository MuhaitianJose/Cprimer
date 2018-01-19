#include "chapterthreeexercises.h"
#include <iostream>
using namespace std;

ChapterThreeExercises::ChapterThreeExercises()
{

}

/**
 * @brief ChapterThreeExercises::exercisesOne
 * 1.编写一个小程序，要求用户使用一个整数指出自己的身高（单位为英寸），然后将身高转换为英尺和英寸。
 * 该程序使用下划线字符来指示输入位置。另外，使用一个const符号常量来表示转换因子。
 */
void ChapterThreeExercises::exercisesOne(){
    int yourInches = 0;
    const int Conversion_factor = 12;
    cout << "Enter your height by inches_" ;
    cin >>yourInches;

    cout <<"feet:  "<<yourInches/Conversion_factor
        <<"inches:  "<<yourInches%Conversion_factor<<endl;

}

/**
 * @brief ChapterThreeExercises::exercisesTwo
 * 2.编写一个小程序，要求以几英尺几英寸的方式输入其身高，并以磅为单位输入其体重。
 * (使用3个变量来存储这些信息。)该程序报告其BMI(BodyMassIndex，体重指数)。
 * 为了计算BMI，该程序以英寸的方式指出用户的身高(1英尺为12英寸)，并将以英寸为单
 * 位的身高转换为以米为单位的身高（1英寸=0.0254米）。然后，将以磅为单位的体重转换
 * 为以千克为单位的体重(1千克=2.2磅)。最后，计算相应的BMI—体重(千克)除以身高
 * (米)的平方。用符号常量表示各种转换因子。
 */
void ChapterThreeExercises::exercisesTwo(){

    const float Conversion_factor_inches = 0.0254;
    const float Conversion_factor_kg = 2.2;

    int feet = 0,inches = 0;
    float weight = 0;
    cout <<"Enter your height feet_"<<endl;
    cin >>feet;
    cout <<"Enter your height inches_"<<endl;
    cin >> inches;

    cout <<"Enter your weight pounds_"<<endl;
    cin >> weight;

    float heightBym = (feet *12+inches)*Conversion_factor_inches;
    float weightByKg = (weight/Conversion_factor_kg);

    float BodyMassIndex = weightByKg/heightBym;

    cout <<"Body Mass Index:"<<BodyMassIndex*BodyMassIndex<<endl;
}

/**
 * @brief ChapterThreeExercises::exercisesThreee
 * 3.编写一个程序，要求用户以度、分、秒的方式输入一个纬度，然后以度为单位显示该纬度。
 * 1度为60分，1分等于60秒，请以符号常量的方式表示这些值。对于每个输入值，应使用一个
 * 独立的变量存储它。下面是该程序运行时的情况：
 * Enter a latitude in degrees, minutes,and seconds:
 * First, enter the degrees: 37
 * Next, enter the minutes of arc: 51
 * Finally, enter the seconds of arc: 19
 *
 * 37 degrees, 51 minutes, 19 seconds = 37.8553 degrees
 *
 */
void ChapterThreeExercises::exercisesThreee(){
    int degrees{0},minutes{0},seconds{0};
    const int Conversion_factor = 60;
    float total_degrees{0.0};
    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;

    cout << "First, enter the degrees: ";
    cin >> degrees;

    cout <<"Next, enter the minutes of arc: ";
    cin >> minutes;

    cout <<"Finally, enter the seconds of arc: ";
    cin >> seconds;

    total_degrees = degrees + (minutes*Conversion_factor+seconds)*1.0f/(Conversion_factor*Conversion_factor);

    cout << degrees<<" degrees, "
         << minutes<<" minutes, "
         << seconds<<" seconds = "
         << total_degrees;
}

/**
 * @brief ChapterThreeExercises::exercisesFour
 * 4.编写一个程序，要求用户以整数方式输入秒数（使用long或longlong变量存储），
 * 然后以天、小时、分钟和秒的方式显示这段时间。使用符号常量来表示每天有多少小时、
 * 每小时有多少分钟以及每分钟有多少秒。该程序的输出应与下面类似：
 * Enter the number of seconds: 31600000
 * 31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds
 */
void ChapterThreeExercises::exercisesFour(){
    long long total_seconds {0};
    int days{0},hours{0},minutes{0},seconds{0};
    const int Day_to_seconds = 24 * 60 * 60;
    const int hours_to_seconds =  60 * 60;
    const int minutes_to_seconds = 60;

    cout << "Enter the number of seconds: ";
    cin >>total_seconds;

    long long muhatian = total_seconds;

    days = total_seconds / Day_to_seconds;
    total_seconds = total_seconds % Day_to_seconds;

    hours = total_seconds / hours_to_seconds;
    total_seconds = total_seconds % hours_to_seconds;

    minutes = total_seconds / minutes_to_seconds;
    seconds = total_seconds % minutes_to_seconds;

    cout << muhatian << "seconds = "
         << days << " days, "
         << hours << " hours, "
         << minutes << " minutes, "
         << seconds << " seconds ";

}

/**
 * @brief ChapterThreeExercises::exercisesFive
 * 5.编写一个程序，要求用户输入全球当前的人口和美国当前的人口（或其他国家的人口）。
 * 将这些信息存储在longlong变量中，并让程序显示美国（或其他国家）的人口占全球人口
 * 的百分比。该程序的输出应与下面类似：
 */
void ChapterThreeExercises::exercisesFive(){

    long long world_population {0},us_population {0};
    float percent {0.0};

    cout << "Enter the world's population: ";
    cin >> world_population;
    cout << "Enter the population of the US: ";
    cin >> us_population;

    percent = us_population*1.0f/world_population*100;

    cout << "The population of the US is "
         << percent<<"% of the world population"
         <<endl;

}

/**
 * @brief ChapterThreeExercises::exercisesSix
 */
void ChapterThreeExercises::exercisesSix(){

}

/**
 * @brief ChapterThreeExercises::exercisesSeven
 */
void ChapterThreeExercises::exercisesSeven(){

}
