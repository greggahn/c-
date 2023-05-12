/*끝자리 숫자 계산하기*/
#include <iostream>
using namespace std;

int main(void){
    int t;
    cin >> t;

    while(t--){
        int numdata, data;
        int lastnum = 1;
        cin >> numdata;
            for(int j = 0; j < numdata ; j++){
                cin >> data;
                data %= 10;
                lastnum *= data;
                lastnum %= 10;
            }
            cout << lastnum << endl;
        }
    return 0;
}
