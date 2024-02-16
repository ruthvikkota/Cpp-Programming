#include <iostream>
#include <string>
using namespace std;

string palindrome(string str,int i,int j) {
  if(i>=j){
    return "Palindrome";
  }
  if(str[i]==str[j]){
    return palindrome(str,i+1,j-1);
  }
  return "Not Palindrome";
}

int main() {
  string str;
  cout<<"Enter the string: ";
  cin >> str;
  int len;
  len=str.length();
  cout<<palindrome(str,0,len-1);
  return 0;
}
