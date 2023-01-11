#include <iostream>

using namespace std;

int romanToInt(string s) {
    int n = 0;

    int curr_num = 0;
    int last_num = 1001;

    for (char i : s) {
        if (i == 'I') curr_num = 1;
        if (i == 'V') curr_num = 5;
        if (i == 'X') curr_num = 10;
        if (i == 'L') curr_num = 50;
        if (i == 'C') curr_num = 100;
        if (i == 'D') curr_num = 500;
        if (i == 'M') curr_num = 1000;

        if(curr_num <= last_num) {
            last_num = curr_num;
            n = n + curr_num;
        }
        else{
            n = n - last_num;
            curr_num = curr_num - last_num;
            n = n + curr_num;
        }
    }
    return n;
}

int main() {
    int x = romanToInt("IX");
    printf("%d\n",x);
}

