#include "coordin.h"
#include <iostream>
#include <cmath>

using namespace std;
extern int muhai ;
polarH rect_to_polar(rectH xypos){
    polarH answer;
    answer.distance = sqrt(xypos.x*xypos.x + xypos.y*xypos.y);
    answer.angle = atan2(xypos.y,xypos.x);
    return answer;
}

void show_polar(polarH dapos){
    const double Rad_to_deg = 57.29577951;
    cout << "distance= " << dapos.distance;
    cout << ", angle= " << dapos.angle*Rad_to_deg << " degrees" << endl;
}


