#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, s;
    cin >> n >> s;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    int c = n - 1;
    int coins = 0;
    while (s > 0){
        if (s >= v[c]){
            coins++;
            s -= v[c];
        }
        else c--;
    }
    cout << coins << endl;
    return 0;
}