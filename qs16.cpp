    /*
    11의 배수
    */
    /*
    정보보안암호수학과 20202089 언현종
    */
    #include <iostream>
    #include <string>
    
    using namespace std;

    string check(string arr){
        int size = arr.length();
        int *num = new int [size];
        
        if(size == 1){ // 크기가 1이면 0 반환
            return "0";
        }

        for(int i = 0; i < size; i++){ // 아스키코드 변환 '1' - '0' = 1을 이용하여 변환
            num[i] = arr[i] - '0';
        }

        string finalstr;

        for(int i = size - 1; i > 0 ; i--){ // 숫자를 빼는 반복 수행 끝자리 수는 num[i]
            
            if(num[i - 1] - num[i] < 0){ // 만약 3 - 5 이면 -2 가 나오는 경우 
                if(i == 1){ // i == 2일 때 123 의 경우 12-3 = 9, 이므로 더 이상 진행될 수 업으므로  i = 1이면 종료
                    return "0";
                }
                else{ // 12345 에서 1234 - 5를 하면 4 - 5 는 -1이므로 3에서 1을 뺴줘야함 그 과정 수행
                    num[i-1] = 10 + num[i - 1] - num[i];
                    num[i-2]--;
                }
            }
            else{ // -가 아닌 경우 정상적으로 i - i-1 수행
                num[i-1] = num[i - 1] - num[i];
            }
        }
        if(num[0] == 0){ // 뺄셈을 다 진행한 후 0번째가 0이면 11의 배수이므로 몫을 출력하기 위한 과정
            for(int j = 1 ; j< size ; j++){ // 다시 아스키코드로 바꾸기
                finalstr.push_back(char(num[j] + 48));
            }

            if(finalstr[0] == '0'){ // 바꾼 몫의 맨 앞이 0이 올 수 없으므로 0 없애기
                return finalstr.substr(1);
            }
            return finalstr;
        }
        else{
            return "0";
        }

        delete[] num;
    }

    int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        int t;
        cin >> t;

        while (t--) {  
            string str;
            cin >> str;
            
            cout << check(str) << "\n";
        }
            
        return 0;
    }
