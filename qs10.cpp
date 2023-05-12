/*
주가분석(1)
*/
/*
정보보안암호수학과 20202089 언현종
*/
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;

    while (t--) {  
        int n;
        cin >> n;

        int fir, sec, thi;
        cin >> fir >> sec >> thi;
        int count = 0;

        if(fir < sec && sec > thi){
            count++;
        }
        for (int i = 3; i < n; i++) {
            int tmp;
            cin >> tmp;
            if(thi == tmp){ // 입력값이 세번째 값이랑 같으면 1,2는 그대로, 3 = 입력값
                if(fir == sec){
                    fir = sec;
                    sec = thi;
                    thi = tmp;
                }
                fir = fir;
                sec = sec;
                thi = tmp;
            }
            else if(sec == thi && thi > tmp){ // 2값이랑 3값이랑 같고 3값이 입력값보다 크면 1,2는 그대로 3 = 입력값
                fir = fir;
                sec = thi;
                thi = tmp;
            }
            else{// 2 2 2 -> 2 2 3 -> 2 2 3 -> 2 2 3 -> 
                fir = sec;
                sec = thi;
                thi = tmp;
            }
            if (sec > fir && sec > thi) {
                count++;
                fir = sec;
                sec = thi;
                thi = tmp;
            }
        }
        cout << count << endl;
    }

    return 0;
}
