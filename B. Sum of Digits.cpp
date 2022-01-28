#include <iostream>
#include <vector>
#include <numeric>
#include <string>
using namespace std;
unsigned int seperate_into_digits(string value, unsigned int count);

//int main()
//{
//	string n;
//	cin >> n;
//	cout << seperate_into_digits(n,0);
//    return 0;
//}

unsigned int seperate_into_digits(string value , unsigned int count)
{
	if (value.length() <= 1) return count;
	count++;
	std::vector<int> digits;
	for (int i = 0; i < value.length(); i++) digits.push_back(int(value[i]));
	//std::reverse(digits.begin(), digits.end());
	int sum = std::accumulate(digits.begin(), digits.end(), 0);
	return seperate_into_digits(to_string(sum), count);
}