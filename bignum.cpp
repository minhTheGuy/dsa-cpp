#include <bits/stdc++.h>

int main() {

    std::string a, b;
    std::cin >> a >> b;
    std::reverse(a.begin(), a.end()); //reverse the string
    std::reverse(b.begin(), b.end());
    int len = std::max(a.size(), b.size()); //find the max length
    int carry = 0;
    std::string ans;
    for (int i = 0; i < len; i++) {
        int x = i < a.size() ? a[i] - '0' : 0; //convert char to int
        int y = i < b.size() ? b[i] - '0' : 0;
        int sum = x + y + carry; 
        ans.push_back(sum % 10 + '0');  //convert int to char
        carry = sum / 10;
    }
    if (carry) {
        ans.push_back(carry + '0'); 
    }
    std::reverse(ans.begin(), ans.end());
    std::cout << ans << std::endl;

    return 0;
}