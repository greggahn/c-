/*가위바위보게임*/        
#include <iostream>
using namespace std;

int main(void){
    int t;
    cin >> t;
    for(int i = 0; i<t;i++){
        int cnt_r = 0,cnt_s = 0,cnt_p = 0;
        int people, data;
        cin >> people;
            for(int j = 0; j < people ; j++){
                cin >> data;
                if(data == 1) cnt_s++;
                if(data == 2) cnt_r++;
                if(data == 3) cnt_p++;
            }
        // 3개가 0이 아닐때
        if(cnt_r != 0 && cnt_s != 0 && cnt_p != 0) cout << "0" << endl;
        // 3개가 같을때
        else{
            if(cnt_r == 0){
                if(cnt_s == 0 || cnt_p == 0) cout << 0 << endl;
                else cout << cnt_s << endl;
            }
            else if(cnt_s == 0){
                if(cnt_r == 0 || cnt_p == 0) cout << 0 << endl;
                else cout << cnt_p << endl;
            }
            else if(cnt_p == 0){
                if(cnt_r == 0 || cnt_s == 0) cout << 0 << endl;
                else cout << cnt_r << endl;
            }
        }
    }
    return 0;
}
