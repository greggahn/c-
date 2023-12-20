
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// brute-froce substring

int naiveStringMatch(char text[], char pattern[]){
    int patLength, txtLength;

    patLength = strlen(pattern);
    txtLength = strlen(text);

    for(int i = 0; i <= txtLength ; i++){
        for(int j = 0 ; j <= patLength ; j++){
            if(j == patLength){
                return i;
            }
            if(text[i+j] != pattern[j]){
                break;
            }
        }
    }
    return -1;
}

vector<int> getFail(string pattern){
    int m = (int)pattern.size();
    int j = 0;
    vector<int> fail(m,0);
    for(int i = 1; i< m ; i++){
        while(j > 0  && pattern[i] != pattern[j]){
            j = fail[j-1];
        }
        if(pattern[i] == pattern[j]){
            fail[i] = ++j;
        }
    }
    return fail;
}
vector<int> kmp(string text, string pattern){
    vector<int > ans;
    vector<int> fail = getFail(pattern);
    for(int i = 0; i<fail.size() ; i++){
        cout << fail[i] << endl;
    }
    int n = (int)text.size(), m = (int)pattern.size();

    int j = 0;

    for(int i= 0; i < n; i++){
        while ((j > 0 && text[i] != pattern[j])){
            j = fail[j-1];
        }
        if(text[i] == pattern[j]){
            if(j == m-1){
                ans.push_back(i-j);
                j = fail[j];
            }
            else{
                j++;
            }
        }
    }
    return ans;
}

int matchingDFA(string text, string pattern){
    int i, j, textLength, patLength;
    patLength = strlen(pattern)
    textLength = strlen(text);

    for(i = 0, j = 0; i<textLength && j< patLengt; i++){
        j = DFA[text[i][j]];
    }
    if(j == patLength){
        return i = patLength;
    }
    else{
        return -1;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    // cin >> t;
    t = 1;
    while(t--){
        string text = "AACBAABACABABACAB";
        string pattern = "ABABACA";
        
        // cin >> text >> pattern;

        // cout << naiveStringMatch(text, pattern);
        for(int i = 0 ; i< 1 ; i++){
            cout << kmp(text,pattern)[i] << endl;
        }

    }

    return 0;
}