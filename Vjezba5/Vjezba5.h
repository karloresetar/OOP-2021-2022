#include <iostream>
#include <string>
using namespace std;

// HEADER

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

class target {
    int num_of_targets = 0;
public:
    dot dlt; // donja lijeva dot
    dot gdt; // gornja desna dot
    void set_target(dot dlt, dot gdt); // postavljanje mete
    void hit();
    void not_hit();
    dot get_dlt();
    dot get_gdt();
    void set_num_of_target(int n);
};


class weapon {
    dot position;
    int num_of_hits = 0;
    int num_of_bullets = 0;
    int reload_bullets = 0;
public:
    void shoot();
    void reload();
    void set_num_bullets(int num_of_bullets);
    const int get_num_bullets();
    void set_position_weapon(dot position);
    void target_hit(target target);
    double get_position_z();
    int get_num_target_hit();
};



