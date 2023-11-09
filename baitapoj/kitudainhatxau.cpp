#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    while (getline (cin, s)){
        stringstream ss(s);
        while (ss >> s){
            int dem = 0;
            for (int i = 0; i < s.size(); i++){
                if (isalpha(s[i]) || s[i] == 39){
                    dem ++;
                }
                else {
                dem = 0;
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}