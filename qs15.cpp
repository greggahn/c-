        /*
        변수 이름
        */
        /*
        정보보안암호수학과 20202089 언현종
        */
        #include <iostream>
        #include <string>
        using namespace std;

        bool check(string str){
            int size = str.length();
                if(isdigit(str.front())){
                    return false;
                }
                else{
                    for(int i = 0; i < size;i++){
                        if(!isalnum(str[i]) && str[i]!= '_' ){
                            return false;
                        }
                    }
                    return true;
                }
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
                cout << check(str) <<"\n";
            }
                
            return 0;
        }
