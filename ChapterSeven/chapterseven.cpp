#include <iostream>
#include <cstring>
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
int* fillArray(int* begin, int* end){
    int* temp = begin;
    if(begin==end){
        return end;
    }
    while (temp < end) {
        cout << "Please enter data: " ;
        cin >> *temp;
        if(!cin){
            cin.clear();
            while (cin.get()!='\n') {
                continue;
            }
            cout << "Bad input; input process terminated" << endl;
            break;
        }else if (*temp <0) {
            break;
        }
        temp++;
    }
    return temp;
}

void showArray(const int *begin, const int *end){
    int i=1;
    const int* temp = begin;
    while (temp < end) {
        cout << "Property #" << i << ": $";
        cout <<*temp << endl;
        i++;
        temp++;
    }
}
void revalue(int r, int *begin, int *end){
    while (begin < end) {
        *begin *=r;
        begin++;
    }
}
int getinfo(student pa[], int n){
    int num_array_elem = n;
    char tmp[SLEN];
    for(int i=0;i<n;i++){
        cout << "Enter name: ";
        cin.getline(tmp,SLEN);
        bool blank_line = true;
        for(unsigned j=0;i< strlen(tmp);j++){
            if(isspace(tmp[j])){
                blank_line = false;
                break;
            }
        }
        if(blank_line){
            num_array_elem=i;
            break;
        }
        strcpy(pa[i].full_name,tmp);
        cout << "Enter hobby: ";
        cin.getline(pa[i].hobby,SLEN);
        cout << "Enter ooplevel: ";
        cin >> pa[i].ooplevel;
        cin.get();
    }
    cout << endl;
    return num_array_elem;
}

void display1(student st){
    cout << "full_name: " << st.full_name << endl
         << "hobby: " << st.hobby << endl
         << "opplevel: " << st.ooplevel << endl;
}

void display2(const student *ps){
    cout << "full_name: " << ps->full_name << endl
         << "hobby: " << ps->hobby << endl
         << "opplevel: " << ps->ooplevel << endl;

}

void display3(const student pa[], int n){
    for(int i=0;i<n;i++){
        cout << "student[" << i+1 << "]-------------" << endl;
        cout << "full_name: " << pa[i].full_name << endl
             << "hobby: " << pa[i].hobby << endl
             << "opplevel: " << pa[i].ooplevel << endl;
    }
}


double calculate(double x, double y, double (*pf)(double, double)){
    return pf(x,y);
}

double add(double x, double y){
    return x+y;
}

double sub(double x, double y){
    return x-y;
}

double mean(double x, double y){
    return (x+y)/2.0;
}
