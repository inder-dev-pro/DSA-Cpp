#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int n=0;
        for(int i=0;i<(s.length());i++) {
            char c=s[i];
            switch (c) {
                case 'I':
                    if (i+1<s.length()&&(s[i+1]=='V'|| s[i+1]=='X')) {
                        n=n-1;
                        break;
                    }
                    else {
                        n=n+1;
                        break;
                    }
                case 'V':
                    n=n+5;
                    break;
                case 'X':
                    if (i+1<s.length()&&(s[i+1]=='L' || s[i+1]=='C')) {
                        n=n-10;
                        break;
                    }
                    else {
                        n=n+10;
                        break;
                    }
                case 'L':
                    n=n+50;
                    break;
                case 'C' :
                    if (i+1<s.length()&&(s[i+1]=='D' || s[i+1]=='M')) {
                        n=n-100;
                        break;
                    }
                    else {
                        n=n+100;
                        break;
                    }
                    
                case 'D' :
                    n=n+500;
                    break;
                case 'M':
                    n=n+1000;
                    break;
                default :
                    cout<<"Enter Valid numbers:"<<endl;
            }

    
        }
        return n;
    }
};

int main() {
    Solution OBJ;

    string s;
    cout<<"Enter the ROMAN NUMBER:"<<endl;
    cin>>s;
    int no=OBJ.romanToInt(s);

    cout<<no;
    return 0;
}
