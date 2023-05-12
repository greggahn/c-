/*정수의 주어진 합 구하기 */

#include <iostream>
using namespace std;

int main(void){
    int t;

    cin >> t;

    for(int i = 0; i < t ; i++){
        int numdata, data;
        int lastnum = 0;
        cin >> numdata;
            for(int j = 0; j < numdata ; j++){
                cin >> data;
                lastnum += data;
            }
            cout << lastnum << endl;
        }
    return 0;
}
