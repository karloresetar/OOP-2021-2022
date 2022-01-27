#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>
#include "vjezba11.hpp"

using namespace std;

int main()
{
	
	ifstream fd("numbers.txt");
	try
	{
		if (!fd.is_open())
		{
			throw string("Error opening file");
		}
	}
	catch (string x)
	{
		cout << x << endl;
	}

	
	vector<int> nums;
	istream_iterator<int> begstr(fd), endstr;
	copy(begstr, endstr, back_inserter(nums));
	ostream_iterator<int> os(cout, "\n");
	copy(nums.begin(), nums.end(), os);


	cout << "GREATER THAN NUMERO 500: " << endl << count_if(nums.begin(), nums.end(), greater_than_500) << endl;
	cout << "Minimal element: " << *min_element(nums.begin(), nums.end()) << endl;
	cout << "Maximal element: " << *max_element(nums.begin(), nums.end()) << endl;


	cout << "LESS THAN NUMERO 300" << endl;
	nums.erase(remove_if(nums.begin(), nums.end(), less_than_300), nums.end());
	copy(nums.begin(), nums.end(), os);


	cout << "######DESCENDING SORTINKS######" << endl;
	sort(nums.begin(), nums.end(), silazno);
	copy(nums.begin(), nums.end(), os);








	



	



}