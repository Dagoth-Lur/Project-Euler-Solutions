#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    int y = 1;
    int z = x + y;
    int sum = 0;

    while (z <= 4000000) {
        if (z % 2 == 0) sum += z;
        x = y;
        y = z;
        z = x + y;
    }

    cout << sum;
    cin.get();
}
