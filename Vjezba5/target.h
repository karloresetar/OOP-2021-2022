#include <iostream>
#include "Vjezba5.h"


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