//Bismillahir Rahmanir Rahim
//Soaib Ahmed...

#include <bits/stdc++.h>

using namespace std;
int main() {
    long long int X, N;
    cin >> X >> N;
    
    long long int result = 0;
    
    for (long long int i = 2; i <= N; i += 2) {
        long long int term = pow(X*1.0, i*1.0);
        result += term;
    }
    
   cout << result <<endl;
    
    return 0;
}
