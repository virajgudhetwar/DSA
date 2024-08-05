// ncr= n!/(ri*(n-r)!)
//ip = n,r 
//op = ncr
//nC0=1
//8C0=8!/0!*(8-0)!


#include <iostream>
using namespace std;

int factorial(int n){
    int factorial= 1;
    
    for (int i = 1; i <= n; i++) {
        factorial = factorial * i;
        }
        return factorial;

        }

int nCr(int n, int r) {

    int num = factorial(n);
    int denom = factorial(r) * factorial(n - r);
    int ans = num / denom;

    return ans;
}


int main(){
    int n, r;
    cin >> n >> r;
    cout << "nCr is" << nCr(n,r) << endl;
    return 0;
}