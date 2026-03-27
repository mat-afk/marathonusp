#include <iostream>

using namespace std;

int number_of_ways(int s, int e)
{
    if (s > e) return 0;

    if (s == e) return 1;

    return number_of_ways(s + 1, e) + number_of_ways(s + 2, e) + number_of_ways(s + 3, e);
}

int main()
{
	int s, e;
	cin >> s >> e;

    cout << number_of_ways(s, e) << endl;
}
