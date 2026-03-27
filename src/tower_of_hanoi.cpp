#include <bits/stdc++.h>

using namespace std;

void hanoi(int n, int start, int middle, int end, int* steps)
{
    if (n == 0) return;

    hanoi(n - 1, start, end, middle, steps);

    cout << start << " " << end << endl;
    *steps = *steps + 1;

    hanoi(n - 1, middle, start, end, steps);
}

int main()
{
	int n;
	cin >> n;

    int* steps = (int*) malloc(sizeof(int));

    hanoi(n, 1, 2, 3, steps);

    cout << *steps << endl;
}
