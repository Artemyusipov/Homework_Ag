#include <iostream>

using namespace std;

int arr[] = {10, 8, 2, 1};

int main(){
int n, x, k;
cin >> n ;
k = 0;
for(int i = 0; i < 4; ++i){
    x = arr[i];
    k += n / x;
    n %= x;
 }
if(n > 0){
    k = -1;
}
cout << k;
return 0;
}