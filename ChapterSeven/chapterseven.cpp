#include <iostream>
#include "chapterseven.h"
using namespace std;

int fill_arr(int arr[], int limit){
    double temp=0;
    int i=0;
    for(i=0;i<limit;i++){
        cout << "Enter score #" << i+1 << ": ";
        cin >> temp;
        if(!cin){
            cin.clear();
            while (cin.get() != '\n') {
                continue;
            }
            cout << "Bad input ; enter anumber: ";
            break;
        }

        if(temp < 0){
            break;
        }
        arr[i] = temp;
    }

    return i;
}

void show_arr(int arr[], int limit){
    if(limit<1){
        cout << "array is error!" << endl;
        return;
    }

    for(int i=0;i<limit;i++){
        cout << "score #" << i+1 << ": " << arr[i] << endl;
    }
}

void average_arr(int arr[], int limit){
    if(limit <1){
        return;
    }
    double sum = 0.0;
    for(int i=0;i<limit;i++){
        sum+=arr[i];
    }
    cout << "average: " << sum/limit << endl;
}

void show_box(box mBox){
    cout << "mBox.maker: " << mBox.maker << endl;
    cout << "mBox.lenght: " << mBox.lenght << endl;
    cout << "mBox.width: " << mBox.width << endl;
    cout << "mBox.height: " << mBox.height << endl;
    cout << "mBox.volume: " << mBox.volume << endl;
}

void show_box_address(box* mBox){
    cout << "mBox->maker: " << mBox->maker << endl;
    cout << "mBox->lenght: " << mBox->lenght << endl;
    cout << "mBox->width: " << mBox->width << endl;
    cout << "mBox->height: " << mBox->height << endl;
    cout << "mBox->volume: " << mBox->volume << endl;
    mBox->volume = mBox->lenght*mBox->width*mBox->height;
}

long double probability(unsigned numbers, unsigned picks){
    long double result = 1.0;
    long double n;
    for(int n=numbers,p=picks;p>0;n--,p--){
        result = result*n/p;
    }
    return result;
}

long double recursive(int n){
    if(1==n||0==n){
        return 1;
    }
    return n*recursive(n-1);
}

int Fill_array(double arr[], int limit){
    int index = 0;
    if(limit < 1){
        cout << "array is error!" << endl;
        return 0;
    }

    for(index=0;index<limit;index++){
        cin >> arr[index];
        if(!cin){
            break;
        }
    }
    return index;
}

void Show_array(double arr[], int limit){
    if(limit < 1){
        cout << "array is error!" << endl;
        return;
    }
    for(int i=0;i<limit;i++){
        cout << "array[" << i << "]= " << arr[i] << endl;
    }
}

void Reverse_array(double arr[], int limit){
    if(limit <1){
        cout << "array is error!" << endl;
        return;
    }
    for(int i=1,j = limit-2;i<j;i++,j--){
        int temp = 0;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
