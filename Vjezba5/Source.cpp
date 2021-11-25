#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Vjezba5.h"

using namespace std;

// Implementacija


int main()
{
	// ZAD 1
	/*srand((unsigned)time(NULL));
	dot t1;
	t1.set_random_value(1, 10);
	double arr[3];
	t1.get_value(arr);
	cout << " " << arr[0] << " " << arr[1] << " " << arr[2] << endl;
	dot t2;
	t2.set_random_value(1, 10);
	t2.get_value(arr);
	cout << " " << arr[0] << " " << arr[1] << " " << arr[2] << endl;
	cout << "2D Udaljenost je : " << t2.distance_2D(t1) << endl;
	cout << "3D Udaljenost je : " << t2.distance_3D(t1) << endl;*/


	// ZAD 2

    /*weapon pistol;
    pistol.set_num_bullets(5);
    string str;
    cout << "p -> to shoot" << endl << "r -> to reload" << endl << "q -> to quit game" << endl << "? -> to check how many bullets left" << endl;
    while (str != "q")
    {
        cin >> str;
        if (str == "q")
        {
            cout << "U left the game" << endl;
        }
        else if (str == "p")
            pistol.shoot();
        else if (str == "r")
            pistol.reload();
        else if (str == "?")
            cout << pistol.get_num_bullets() << endl;
        else
        {
            cout << "______________________________________" << endl;
            cout << "You didnt enter an option from above" << endl;
            cout << "p -> to shoot" << endl << "r -> to reload" << endl << "q -> to quit game" << "? -> to check how many bullets left" << endl;
            cout << "______________________________________" << endl;
        }
            
    }*/

    // ZAD 3

    /*dot dlt, gdt;
    dlt.set_value(5, 2, 0);
    gdt.set_value(5, 3, 1);
    target t1;
    t1.set_target(dlt, gdt);
    t1.hit();
    t1.not_hit();*/



	// ZAD 4 

	srand(time(NULL));
	target* targets;
	int targetcount = 0;
	cout << "Enter numbaaa of targets: " << endl;
	cin >> targetcount;
	targets = new target[targetcount];
	for (int i = 0; i < targetcount; i++)
	{
		targets[i].dlt.set_random_value(0, 5);
		targets[i].gdt.set_random_value(5, 10);

		cout << i+1 << "DLT: " << targets[i].dlt.print_dot() << endl;
		cout << i+1 << "GDT: " << targets[i].gdt.print_dot() << endl;
	}
	dot dlt, gdt;
	weapon pistol;
	cout << "Enter the number of bullets" << endl;
	int bullets_num;
	cin >> bullets_num;
	pistol.set_num_bullets(bullets_num);
	dot weapon_position;
	pistol.set_position_weapon(weapon_position);
	double x, y, z;
	target t1;
	double pistol_height = pistol.get_position_z();
	/*cout << "The weapon is at height: " << pistol_height << endl;*/
	while (pistol.get_num_bullets())
	{
		cout << "Enter your bullet destination : " << endl;
		cin >> x >> y >> z;
		weapon_position.set_value(x, y, z);
		pistol.set_position_weapon(weapon_position);
		pistol.shoot();
		for (int i = 0; i < targetcount; i++) {
			pistol.target_hit(targets[i]);
		}
		
	}


	cout << "Number of successful hits: " << pistol.get_num_target_hit() << endl;

}

