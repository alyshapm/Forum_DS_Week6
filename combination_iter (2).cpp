#include <iostream>
#include <algorithm>
using namespace std;

double combinationIter(double n, double r){
  if (r>n){
    return 0; // in any case, n cannot be bigger than r. 
  }
  if (r==0){
    return 1; // dividing n by 0 is impossible.
  }
  if (r*2>n) {
    r = n-r; // the "base case" for this iterative method.
  }

  int combination = n;
  for (int i = 2; i<=r; i++){
    combination *= (n-i+1);
    combination /= i;
  }

  return combination;

}

int main() {
  double n, r, result;

  cout << "Enter the number of elements in the set: ";
  cin >> n;
  cout << "Enter the number of items selected from the set: ";
  cin >> r;

  result = combinationIter(n, r);

  cout << "The number of combinations is " << result<<endl;

  return 0;
}
