#include <iostream>
using namespace std;

int step(int i, int j){
    if (i == 1 && j == 1) return 1;
    if (i < 0 or j < 0) return 0;
    return (step(i - 1, j - 2) + step(i - 2, j - 1));
}
int main(){
    int n, m;
    cin >> n >> m;
    cout << step(n, m);
}