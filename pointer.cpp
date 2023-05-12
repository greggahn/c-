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

        int num, first, a, b;
        int correctnum = 1;
        // 1 ~ 9, 10 ~ 99, 100 ~ 999, 1000 ~ 9999, 10000 ~ 99999, 100000 ~ 999999
        if(n < 10){ // 1~9 9개, 9자리
            correctnum = n;
        }
        else if( 10 <= n && n < 190){ // 10~99 90개, 10 189자리  177, 178 : 98 179, 180 : 99 10 = 10,11 11 = 12,13 12 = 14,15 | 13 = 16,17 | 14 = 18,19 | 15 = 20,21 ... 99 = 188,189 | 100 = 190, 191, 192
            num = 10;
            first = 10;
            a = (n - first) / 2; 
            b = (n - first) % 2;
            for(int i = 0 ; i < a ; i++){
                num++;
            }
            if(b == 0){
                correctnum = num / 10;
            }
            else{
                correctnum = num % 10;
            }
        }
        else if(190 <= n && n < 2900){ // 100~999 900개, 190 ~ 2889자리 자리수 출력 3자리, 200 - 189 = 11 / 3  = 몫 3번째 수 나머지 2번째 자리 100 101 102 103
            num = 100;
            first = 190;
            a = (n - first) / 3; 
            b = (n - first) % 3;
            for(int i = 0 ; i < a ; i++){
                num++;
            }
            if(b == 0){
                correctnum = num / 100;
            }
            else if(b == 1){
                num %= 100;
                correctnum = num / 10;
            }
            else{
                correctnum = num % 10;
            }
        }
        else if(2900 <= n && n < 39000){ // 1000~9999 9000개, 2900 ~ 38889자리
            num = 1000;
            first = 2900;
            a = (n - first) / 4; 
            b = (n - first) % 4;
            for(int i = 0 ; i < a ; i++){
                num++;
            }
            if(b == 0){
                correctnum = num / 1000;
            }
            else if(b == 1){
                num %= 1000;
                correctnum = num / 100;
            }
            else if(b == 2){
                num %= 1000;
                num %= 100;
                correctnum = num / 10;
            }
            else{
                correctnum = num % 10;
            }
        }
        else if(39000 <= n && n < 490000){ // 10000~99999 90000개, 39000 ~ 488889자리
            num = 10000;
            first = 39000;
            a = (n - first) / 5; 
            b = (n - first) % 5;
            if(b == 0){
                correctnum = num / 10000;
            }
            else if(b == 1){
                num %= 10000;
                correctnum = num / 1000;
            }
            else if(b == 2){
                num %= 10000;
                num %= 1000;
                correctnum = num / 100;
            }
            else if(b == 3){
                num %= 10000;
                num %= 1000;
                num %= 100;
                correctnum = num / 10;

            }
            else{
                correctnum = num % 10;
            }
        }
        else if(490000 <= n && n < 1000000){ // 100000~999999 900000개, 490000 ~ 1000000자리
            num = 100000;
            first = 490000;
            a = (n - first) / 6; 
            b = (n - first) % 6;
           if(b == 0){
                correctnum = num / 100000;
            }
            else if(b == 1){
                num %= 100000;
                correctnum = num / 10000;
            }
            else if(b == 2){
                num %= 100000;
                num %= 10000;
                correctnum = num / 1000;
            }
            else if(b == 3){
                num %= 100000;
                num %= 10000;
                num %= 1000;
                correctnum = num / 100;
            }
            else if(b==4){
                num %= 100000;
                num %= 10000;
                num %= 1000;
                num %= 100;
                correctnum = num / 10;

            }
            else{
                correctnum = num % 10;
            }
        }
        // 1 * 9 + 2 * 90 + 3 * 900 + 4 * 9000 + 5 * 90000 + 6 * 85185

        cout << correctnum << endl;
    }

    return 0;
}
