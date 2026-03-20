#include <iostream>

using namespace std;

int main(){
    long long n;
    cin >> n;

    long long totalSum = n * (n+1)/2;

    long long InputSum = 0;
    for (int i = 0; i < n-1; i++){
        long long x;
        cin >> x;
        InputSum += x;
    }
    
    long long missingNumber = totalSum - InputSum;
    
    cout << missingNumber << endl;
    return 0;
}