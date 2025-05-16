#include <iostream>

using namespace std;

int main() {
  
    int Count = 0;
    for (int i = 3; i < 1000; i++) {
      
        if (i % 3 == 0 || i % 5 == 0)
            Count = Count + i;
    }
  
    cout << Count << endl;
    return 0;
}
