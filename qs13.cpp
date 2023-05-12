/*
K번째 숫자
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
        int k;
        cin >> k;
        int num = 0, numlen = 0, count = 0;
        int tmp;
        while(count <= k){
            // 자리수 체크
            tmp = num +1; // 1부터 시작
            while(tmp>0){ // 1~9면 한자리 10~99면 두자리....
                tmp/=10;
                numlen+=1;
            }
            // 자리수 체크 후 숫자 더하기
            num+=1;
            // 횟수에 자리수 더하기 해당하는 자리수를 찾기 위해
            count += numlen;
            // 자리수 초기화 
            numlen = 0;
            // 횟수가 k랑 같거나 k보다 커지면
            if(count >= k){
                numlen = count - k; // 얼마나 넘었는지 구하기
                for(int i = 0; i< numlen;i++){ // 같다면 for문 넘어감, 최대 범위는 0~숫자의 자리수 예를들어 수가 110이고 k번째가 1이면 k는 220 그런데 자리수만큼 계속 더했으므로, numlen = k+2인 상태
                    num /= 10; //자리수만큼 나누기
                }
                cout << num % 10 << "\n"; //0이면 끝자리, 1이면 두번째 자리, 2면 세번째 자리.....
                break;
            }
        }
    }
    return 0;
}
