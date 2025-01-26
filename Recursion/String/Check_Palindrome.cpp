#include <iostream>
#include <string>

using namespace std;

bool palindrome(string s, int start, int end) {
    //Base Condition
    if (s[start]!=s[end]) {
        return false;
    }
    if (start>=end) {
        return true;
    }
    return palindrome(s, start+1, end-1); 

}


int main() {
    string name="HelloolleH";
    cout<<palindrome(name, 0, name.size()-1);
    return 0;
}