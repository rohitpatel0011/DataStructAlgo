//
// Created by superuser on 10/7/23.
//
int printDivisors(int n) {
    // Write your code here
 int divisors;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);
        }    }
    return divisors;
}
int main