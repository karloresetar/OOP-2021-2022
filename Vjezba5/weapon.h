#include <iostream>
#include "Vjezba5.h"


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
