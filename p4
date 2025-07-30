#include <iostream>
#include <thread>
using namespace std;


void func(int i) {
    cout << "help " << i << endl;
}

int main() {
for (int i = 0; i < 5; i++) {
thread tr(func, i);
tr.join();
}
return 0;
}
