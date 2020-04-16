#include <iostream>
using namespace std;

int main(void) {
    int arr[1000001] = {0}, i, j, money[6] = {10, 20, 50, 100, 200, 500}, n;
    for(i = 0; i < 6; i++)
        arr[money[i]] = 1;
    for(i = 10; i < 1000001; i += 10)
    {
        for(j = 0; j <  6; j++)
            if(i + money[j] < 1000001 && arr[i + money[j]] == 0)
                arr[i + money[j]] = arr[i] + 1;
    }
    cin >> n;
    if(arr[n] == 0)
        cout << -1 << endl;
    else
        cout << arr[n] << endl;
    return 0;
}