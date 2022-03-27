#include <string>
#include <iostream>
using namespace std;

double combinationRecur(double n, double r) {
    int i;
    if (r > 0) { // general case
        return (n/r)*combinationRecur(n-1, r-1); // formula for combination (nCr)
    } else {
        return 1; // base case; when r <= 0. it works to stop the recursion.
    }
}

int main(){
    double N, R; // declare var for n (number of item in set) and r (number of items selected from the set)
    int comb; // declare var to receive no. of possibler combinations from the function
    
    // user input
    cout << "Enter the number of elements in the set (n): ";
    cin >> N;
    cout << "Enter the number of items selected from the set (r): ";
    cin >> R;

    // call function with n and r as parameter
    comb = combinationRecur(N, R);

    cout<< "\nThe number of possible combinations (nCr) are = "<< comb <<endl; // print result
}