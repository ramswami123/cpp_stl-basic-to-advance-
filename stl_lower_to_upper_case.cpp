#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
    int main(){
        string s="heffiLIVBF";
        //to convert single element or char
        s[3]=toupper(s[3]);//s[3]->f=>F
        cout<<s[3]<<endl;
        //to convert whole string to upper case
        transform(s.begin(),s.end(),s.begin(),::toupper);
        cout<<s<<endl;

        //to convert single element in string or charc
        s[6]=tolower(s[6]);//s[6]->I=>i
        //to convert entire string to lowercase
        transform(s.begin(),s.end(),s.begin(),::tolower);
        cout<<s<<endl;
        //heffilivbf
        return 0;
    }