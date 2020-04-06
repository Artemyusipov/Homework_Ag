#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

struct StudentData{
    string name;
    string surname;
    int score;
};

bool compare(const StudentData &a, const StudentData &b){
    int data1 = a.score;
    int data2 = b.score;
    return data1 > data2 ? true : false;
}

int main(void){
    int n;
    int a;
    int b;
    int c;
    cin >> n;
    vector < StudentData > arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i].name >> arr[i].surname;
        cin >> a >> b >> c;
        arr[i].score = a + b + c;
    }
    sort(arr.begin(), arr.end(), compare);
    for (int i = 0; i < n; i++) {
        cout << arr[i].name << " " << arr[i].surname << endl;
    }
    return 0;
}
