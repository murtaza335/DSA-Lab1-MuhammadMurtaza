#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

int findSubstr(string str, string substr){
    bool matched=false;
    bool found = false;

    if(substr.size()==0){
        cout<<"Empty substring";
        return 0;
    }

    for(int i=0;i<str.size();i++){
        matched = false;
        for(int j=0;j<substr.size();j++){
            if(str[i+j]!=substr[j])
            {
                matched=false;
                break;
            }
            else{
                matched=true;
            }
        }
        if(matched==true){
            cout<<"Substring found at index "<<i;
            found=true;
            break;
        }
    }
    if(found == false){
        cout<<"Not found.";
        return -1;
    }
    return 1;
}

int main()
{
    string substr;
    string str;
    cout<<"Enter string: ";
    getline(cin, str);
    cout<<endl;
    cout<<"Enter substring to find: ";
    getline(cin, substr);
    
    findSubstr(str, substr);
    getch();
    return 0;
}