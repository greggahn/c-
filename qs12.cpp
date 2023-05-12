/*
두구간이차지하는길이구하기
*/
/*
정보보안암호수학과 20202089 언현종
*/
#include <iostream>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    for(int i = 0; i<t; i++){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int overlen;
        int sumlen;
        if((a > c) || (b < c)){
            overlen = 0;
            sumlen = b - a + d - c;
        }
        else{
            overlen = max(0, min(b,d) - max(a,c));
            sumlen = max(b,d) - min(a,c);
        }
        cout << overlen << " " << sumlen << "\n";
    }
    return 0;
}
