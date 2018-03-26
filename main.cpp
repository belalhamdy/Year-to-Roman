#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

using namespace std;

int main()
{
	string roman[1500];
	string new_year[1000];
	roman[1000] = "M";
	roman[900] = "CM";
	roman[500] = "D";
	roman[400] = "CD";
	roman[100] = "C";
	roman[90] = "XC";
	roman[50] = "L";
	roman[40] = "XL";
	roman[10] = "X";
	roman[9] = "IX";
	roman[5] = "V";
	roman[4] = "IV";
	roman[1] = "I";
	//const int M = 1000,CM = 900, D = 500, CD = 400,C = 100,XC = 90, L = 50,XL=40, X = 10, IX = 9,V = 5,IV = 4, I = 1;
	int year, test, index = 0;
	cout << "Enter Year : ";
	cin >> year;
	test = abs(year);
	for (int i = 1200; i>0; --i)
	{
		if (roman[i].size())
		{
			while (test >= 0)
			{
				test -= i;
				new_year[index] = roman[i];
				index++;
			}
			test += i;
			index--;
		}
	}
	for (int i = 0; i<index; i++)
		cout << new_year[i];
	cout << endl;


	system("pause");
}
