#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int num;
    cin >> num;
    while(num > 0){
        cout << num <<"\n" ;
        num  /= 10;
        cout << num <<"\n" ;
    }
    cout << num <<"\n" ;

    return 0;
}
