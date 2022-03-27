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
    int comb2;
    int comb3;

    // user input
    cout << "Enter the number of elements in the set (n): ";
    cin >> N;
    cout << "Enter the number of items selected from the set (r): ";
    cin >> R;

    // call function with n and r as parameter
    comb = combinationRecur(N, R);
    comb2 = combinationRecur(5, 3);
    comb3 = combinationRecur(13, 4);

    cout<< "\nThe number of possible combinations (nCr) are = "<< comb; // print result
    cout<< "\nThe number of possible combinations when n=5 and r=3 are = "<< comb2;
    cout<< "\nThe number of possible combinations when n=13 and r=4 are = "<< comb2 <<endl;
}