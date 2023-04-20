#include <iostream>
using namespace std;

long max (long n1, long n2, long n3);
long min (long n1, long n2, long n3);

int main() {
    long num1, num2, num3;
    cin>>num1>>num2>>num3;

    cout << min(num1, num2, num3) << " " << max(num1, num2, num3);
    return 0;
}

long max (long n1, long n2, long n3)
{
    if (n1 > n2 && n1 > n3) {
        return n1;
    } else if (n2 > n1 && n2 > n3) {
        return n2;
    } else {
        return n3;
    }
}

long min (long n1, long n2, long n3)
{
    if (n1 < n2 && n1 < n3) {
        return n1;
    } else if (n2 < n1 && n2 < n3) {
        return n2;
    } else {
        return n3;
    }
}