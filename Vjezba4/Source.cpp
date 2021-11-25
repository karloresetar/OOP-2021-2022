#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <regex>
#include "Vjezba4.h"

using namespace std;



string corr_sentence(string& str)
{
	string space = " ";
	string fixed_sentence;

	fixed_sentence = multiple_spaces(str);

	cout << fixed_sentence << endl;

	for (int i = 0; i < fixed_sentence.size(); i++)
	{
		if ((fixed_sentence[i + 1] == ',' || fixed_sentence[i+1] == '.') && fixed_sentence[i] == ' ')
		{
			fixed_sentence.erase(fixed_sentence.begin() + i);
		}

		if ((fixed_sentence[i] == ',' || fixed_sentence[i] == '.') && fixed_sentence[i + 1] != ' ')
		{
			fixed_sentence.insert(i + 1, space);
		}
	}

	return fixed_sentence;

}


string multiple_spaces(string& str)
{
	regex re("\\s{2,}");
	string space = " ";
	string ispis = regex_replace(str, re, space);

	return ispis;
}

string fun_pig_latin(vector <string> s)
{
	string temp, result;
	string vowels("aeiouAEIOU");
	int random = rand() % s.size();
	string str = s[random];
	for (string::iterator it = str.begin(); it != str.end(); ++it)
	{
		if (*it != ' ' && *it != ',' && *it != ';' && *it != '?' && *it != '!' && *it != '.')
		{
			temp.push_back(*it);
		}

		else
		{
			if (vowels.find(temp[0]) != string::npos)
			{
				temp.append("hay");
				temp += *it;
				result.append(temp);
				temp.clear();
			}
			else
			{
				while (vowels.find(temp[0]) == string::npos)
				{
					temp.push_back(tolower(temp[0]));
					temp.erase(temp.begin());

				}
				temp.append("ay");
				temp += *it;
				result.append(temp);
				temp.clear();

			}
		}
	}
	return result;

}



