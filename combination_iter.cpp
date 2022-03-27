#include <iostream>
#include <algorithm>
using namespace std;

double combination(double n, double r){
    double combinations = 1;

    for (int i = 0; i < r; i++) { // i has to be smaller than r because otherwise there would be a division by 0 which isn't possible
    combinations *= (n-i)/(r-i);
    }

   cout << "The number of combinations when n=" << n << " and r=" << r << " is " << combinations << endl;
}

int main() {
    double N, R;
    cout << "Enter the number of elements in the set: ";
    cin >> N;
    cout << "Enter the number of items selected from the set: ";
    cin >> R;

    //call the function with different inputs
    combination(N, R);
    combination(5, 3);
    combination(13, 4);
    combination(10, 2);

  return 0;
}
