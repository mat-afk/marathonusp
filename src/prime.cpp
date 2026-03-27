#include <iostream>

using namespace std;

bool is_prime(int x)
{
    if (x == 1) return false;

    if (x % 2 == 0 && x != 2) return false;

    for (int i = 3; i * i <= x; i += 2)
    {
        if (x % i == 0) return false;
    }

    return true;
}

int main()
{
	int x;

	cin >> x;

	cout << (is_prime(x) ? "S" : "N") << endl;
}
