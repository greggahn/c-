/*
홀수 마방진
*/
/*
정보보안암호수학과 20202089 안현종
*/
#include <iostream>
using namespace std;

void cat(int n){
    int cal = 0, span = (n-1)/2;
    int arr[n][n];

    //배열 초기화
    for(int i = 0; i< n ; i++){
        for(int j = 0 ; j< n; j++){
            arr[i][j] = 0;
        }
    }
    arr[cal][span] = 1;
    //마방진 만들기
    if(n == 1){
        arr[0][0] = 1;
    }
    else{
        for(int i = 2 ; i <= n * n ; i++){
            cal--;
            span++;
            if(cal < 0 && span > n-1){
                cal += 2;
                span--;
            }
            if(cal < 0){
                cal = n-1;
            }
            if(span > n-1){
                span = 0;
            }
            if(arr[cal][span] != 0){
                cal += 2;
                span --;
            }
            arr[cal][span] = i;
        }
    }

    for(int i =0 ; i< n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;

    for(int i = 0 ; i< t; i++){
        int n;
        cin >> n;
        cat(n);
    }
    return 0;
}
