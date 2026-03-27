#include <iostream>

using namespace std;

void weird_algorithm(long long n)
{
    cout << n << " ";

    if (n == 1)
    {
        cout << endl;
        return;
    }

    if (n % 2 == 0) weird_algorithm(n / 2);
    else weird_algorithm((n * 3) + 1);
}

int main()
{
	long long n;
	cin >> n;

    weird_algorithm(n);
}
