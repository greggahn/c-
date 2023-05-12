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
            // a b  <> c d 
            // a < b 이므로 a > d 라면 c < d < a <b
            // c < d 이므로 c > b 라면 a < b < c < d
            // a > d,  c > b, a1 > d1, c1 > b1
            if((a > d) || (c > b) || (a1 > d1) || (c1 > b1)){ //안 겹칠때
                area = (((b - a) * (b1 - a1)) + ((d - c) * (d1 - c1)));
                border = 2 * ((b - a + d - c) + (b1 - a1 + d1 - c1));
            }
            else if(((c <= (a) && (b) <= d) && (c1 <= (a1) && (b1) <= d1)) || ((a <= (c) && (d) <= b) && (a1 <= (c1) && (d1) <= b1))){ //안에 완전히 들어갈 때, 완전히 겹칠 떄
                if(((c <= (a) && (b) <= d) && (c1 <= (a1) && (b1) <= d1))){ //2번째 사각형 안에 1번째 사각형이 들어온 경우
                    area = (d - c) * (d1 - c1);
                    border = 2 * ((d - c) + (d1 - c1));
                }
                else{ // 1번째 사각형 안에 2번째 사각형이 들어온 경우
                    area = (b - a) * (b1 - a1); 
                    border = 2 * ((b - a) + (b1 - a1));
                }
            }
            else{ // 일부만 겹칠 때
                overlen = max(0, min(b,d) - max(a,c)); //x
                overlen1 = max(0, min(b1,d1) - max(a1,c1)); //y
                sumlen = max(b,d) - min(a,c); //x 
                sumlen1 = max(b1,d1) - min(a1,c1); //y

                area = (((b - a) * (b1 - a1)) + ((d - c) * (d1 - c1)) - (overlen1 * overlen));
                border = 2 * (sumlen + sumlen1);
            }
            cout << area << " " << border << "\n";
    }
    return 0;
}
