#include <iostream>
#include <string>
using namespace std;
string lcs(string s1, string s2, int i, int j){
    if (i == 0 || j == 0)
        return "";
    if (s1[i - 1] == s2[j - 1])
        return lcs(s1, s2, i - 1, j - 1) + s1[i - 1];

    string sq1 = lcs(s1, s2, i - 1, j);
    string sq2 = lcs(s1, s2, i, j - 1);
    if (sq1.length() > sq2.length())
        return sq1;
    return sq2;
}
int main(){
    string s1, s2;
    cin >> s1 >> s2;
    int i,j;
    i=s1.length();
    j=s2.length();
    cout << lcs(s1, s2, i, j);
    return 0;
}
