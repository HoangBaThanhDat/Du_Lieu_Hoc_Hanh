#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    int sum = 0;
    int i = 0;

    while (i < str.length()) {
        int num = 0;
        bool isNeg = false;

        if (str[i] == '-') {
            isNeg = true;
            i++;
        }

        while (i < str.length() && isdigit(str[i])) {
            num = num * 10 + (str[i] - '0');
            i++;
        }

        if (isNeg) {
            num = -num;
        }

        sum += num;

        i++;
    }

    cout <<  sum ;

    return 0;
}