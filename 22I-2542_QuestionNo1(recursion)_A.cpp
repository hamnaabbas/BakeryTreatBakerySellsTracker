// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int divisor(int n, int i = 1, int total = 0) {
    if (i > n / 2) {
        return total;
    }
    if (n % i == 0) {
        total= total+ i;
    }
    return divisor(n, i + 1, total);
}
bool is_perfect_number(int n) {
    
    return divisor(n) == n;
}

int main() {
    int number;
    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    if (is_perfect_number(number)) {
        cout << number << " is a perfect number." <<endl;
    } else {
        cout << number << " is not a perfect number." << endl;
    }

    return 0;
}

