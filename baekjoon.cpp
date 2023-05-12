/*
두사각형면적둘레구하기
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
            int px, py, qx, qy;
            int a, b, c, d, a1, b1, c1, d1;
            for(int i = 0; i < 2; i++){ // 좌표 2개 받기
                cin >> px >> py >> qx >> qy;
                if(i == 0){
                    a = px;
                    b = qx;
                    a1 = py;
                    b1 = qy;
                }
                else{
                    c = px;
                    d = qx;
                    c1 = py;
                    d1 = qy;
                }
            }
            int overlen, overlen1; // x
            int sumlen, sumlen1; // y
            int area, border;
            overlen = max(0, min(b,d) - max(a,c)); //x
            overlen1 = max(0, min(b1,d1) - max(a1,c1)); //y
            sumlen = max(b,d) - min(a,c); //x 
            sumlen1 = max(b1,d1) - min(a1,c1); //y
            // a b  <> c d 
            // a < b 이므로 a > d 라면 c < d < a <b
            // c < d 이므로 c > b 라면 a < b < c < d
            // a > d,  c > b, a1 > d1, c1 > b1
            if((a > d) || (c > b) || (a1 > d1) || (c1 > b1)){ //안 겹칠때
                if(((b1 - c1) == sumlen1 || (d1 - a1) == sumlen1) && (sumlen > (d - a) || sumlen > (b - c))){
                    cout << "b" <<"\n";
                }
                
                else if(((d1 - a1) == sumlen1 || (b1 - c1) == sumlen1) && (((d-a) == sumlen) || (b-c) == sumlen)){
                    cout << "c" <<"\n";
                }
                else{
                    cout << "d" << "\n";
                }
            }
            else if(((c <= (a) && (b) <= d) && (c1 <= (a1) && (b1) <= d1)) || ((a <= (c) && (d) <= b) && (a1 <= (c1) && (d1) <= b1))){ //안에 완전히 들어갈 때, 완전히 겹칠 떄
                cout << "a" <<"\n";
            }
            else{ // 일부만 겹칠 때
               cout << "a" <<"\n";
            }
    }
    return 0;
}
