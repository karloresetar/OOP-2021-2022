#include <iostream>
#include "Vjezba5.h"


class dot {
    double x = 0;
    double y = 0;
    double z = 0;
public:
    string print_dot();
    void set_value(double x, double y, double z);
    void set_random_value(double rand_min, double rand_max);
    double* get_value(double arr[]);
    double distance_2D(dot t);
    double distance_3D(dot t);
    double get_z();
    double get_x();
};
