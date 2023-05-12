/*주어진정수의최대최소구하기*/

#include <iostream>
using namespace std;

int main(void){
    int t;
    int maxnum, minnum;
    cin >> t;
    for(int i = 0; i<t;i++){
        int numdata, data;
        cin >> numdata;
            for(int j = 0; j < numdata ; j++){
                cin >> data;
                if(j == 0){
                    minnum = data;
                    maxnum = data;
                } 
                if(data>maxnum) maxnum = data;
                if(data<minnum) minnum = data;
            }
        cout << maxnum << " " << minnum << endl;
    }
    return 0;
}
