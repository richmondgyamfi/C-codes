#include <iostream>
using namespace std;

int main() {
    int n1, n2, temp1, temp2, lcm;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    temp1 = n1;
    temp2 = n2;

    while(temp1 != temp2) {
        if(temp1 > temp2)
            temp1 -= temp2;
        else
            temp2 -= temp1;
    }

    lcm = (n1 * n2) / temp1;

    cout << "LCM = " << lcm;
    return 0;
}
