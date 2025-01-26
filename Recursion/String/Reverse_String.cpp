#include <iostream>
#include <string>

using namespace std;

void ar(string s,int start, int end) {
    cout<<"Array is:-";
    for (int i=start;i<=end;i++) {
        cout<<s[i]<<" ";
    }
    cout<<endl;
};


string reversestring(string s, int start, int end){
    char temp;
    //ar(s,start,end);
    cout<<s<<endl;
    //Base Case
    if (start>=end){
        return s;
    }
    //Operation
    else {
        temp=s[start];
        s[start]=s[end];
        s[end]=temp;
        return reversestring(s, start+1, end-1);
    }
}

int main() {
    string name="Pranav";
    cout<<reversestring(name, -1, name.size());
    return 0;
}