#include <iostream>

using namespace std;

long long factorial(int x)
{
    long long f = 1;

    for (int i = x; i > 1; i--) f *= i;

    return f;
    
}

int main()
{
	int x;

	cin >> x;

	cout << factorial(x) << endl;
}
