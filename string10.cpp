#include <iostream>
#include <string>
using namespace std;
int Word_count(string text) {
int ctr = 0;
for (int x = 0; x < text.length(); x++)
{
if (text[x] == ' ')
ctr++;
}
return ctr + 1;
}

int main() {
string str;
int num;
cout<<"enter a string :"<<endl;
getline(cin,str);
num=Word_count(str);
cout<<"total number of word in the strings are "<<num<<endl;
return 0;
}
