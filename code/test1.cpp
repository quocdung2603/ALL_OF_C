#include <iostream>
#include <set>

using namespace std;

set<int> uniqueIntegers(int A, int B) {
    set<int> uniqueSet;
    uniqueSet.insert(A);

    for (int i = 1; i <= B; i++) {
        set<int> tempSet(uniqueSet);

        for (int num : tempSet) {
            uniqueSet.insert(num * -1);
            uniqueSet.insert(num - 1);
        }
    }

    return uniqueSet;
}

int main() {
    int A, B;
    cout << "Nhap so nguyen A: ";
    cin >> A;
    cout << "Nhap so dong B: ";
    cin >> B;

    set<int> result = uniqueIntegers(A, B);
    cout << "So nguyen khac nhau An co the co duoc: " << result.size() << endl;

    return 0;
}
