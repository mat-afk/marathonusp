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
	int n;
	cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (is_prime(i)) cout << i << endl;
    }
}
