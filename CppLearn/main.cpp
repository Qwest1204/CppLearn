#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    int nums[3];
    nums[0] = 64;
    nums[1] = 89;
    nums[2] = 42;

    cout << nums[2];

    return 0;
}
