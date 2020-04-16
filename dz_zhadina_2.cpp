#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector <vector<long long>> timeTable(n, vector<long long>(2));
    long long max = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) cin >> timeTable[i][j];
    }
    for (int i = 0; i < n; i++) {
        if (max < timeTable[i][1]) max = timeTable[i][1];
    }
    vector <long long> room(max + 1);
    for (int i = 0; i < max; i++) room[i] = 0;
    long long tmpAud = 0;
    for (int i = 0; i < n; i++) {
        room[timeTable[i][0]]++;
        room[timeTable[i][1]]--;
    }
    long long places = 0;
    int maxVal = 0;
    for (int i = 0; i < max; i++) {
        places += room[i];
        if (maxVal < places) maxVal = places;
    }
    cout << maxVal << endl;
    return 0;
}
