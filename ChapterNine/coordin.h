#ifndef COORDIN_H
#define COORDIN_H

struct polarH{
    double distance;
    double angle;
};
struct rectH{
    double x;
    double y;
};

polarH rect_to_polar(rectH xypos);
void show_polar(polarH xypos);

#endif // COORDIN_H
