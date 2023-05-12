/*이진수에서 0과 1의 개수*/
// #include <iostream>
// #include <fstream>
// using namespace std;

// int main(void){
//     ifstream readFile;
//     readFile.open("input.txt");
//     int arr;
//     readFile >> arr;
//     cout << arr <<"\n";
//     int len = arr;
//     for(int i = 0; i < len ;i++){
//         int check1 = 0, check0 = 0;
//         readFile >> arr;
//         cout << arr <<"\n";
//         while(arr!=0){
//             if(arr%2 == 1) check1++;
//             else check0++;
//             arr/=2;
//         }
//         cout << check0<< " " << check1 << "\n";
//     }
//     readFile.close();

//     return 0;
// }
#include <iostream>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    for(int i = 0; i<t; i++){
        int arr;
        cin >> arr;
        int check1 = 0, check0 = 0;
        while(arr!=0){
            if(arr%2 == 1) check1++;
            else check0++;
            arr/=2;
        }
        cout << check0<< " " << check1 << "\n";
    }
    return 0;
}