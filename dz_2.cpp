#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

struct StudentData{
    string name;
    string surname;
    int math;
    int phys;
    int comp;
};

bool compare(const StudentData &a, const StudentData &b){
    int data1 = a.math + a.phys + a.comp;
    int data2 = b.math + b.phys + b.comp;
    return data1 > data2 ? true : false;
}

int main(void){
    int n;
    cin >> n;
    vector < StudentData > arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i].name >> arr[i].surname;
        cin >> arr[i].math >> arr[i].phys >> arr[i].comp;
    }
    sort(arr.begin(), arr.end(), compare);
    for (int i = 0; i < n; i++) {
        cout << arr[i].name << " " << arr[i].surname << endl;
    }
    return 0;
}