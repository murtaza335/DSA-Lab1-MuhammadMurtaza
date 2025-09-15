#include<iostream>
#include<conio.h>
#include <vector>
using namespace std;
int main(){

    int size;
    int *arr;
    int find;
    vector<int> indices;
    cout<<"Enter size of the array: ";
    cin>>size;
    arr = new int[size];
    for(int i=0;i<size;i++){
        cin>>*(arr+i);
    }
    cout<<"enter the number to find: ";
    cin>>find;
    cout<<endl;
    if(size != 0){
        for(int i=0;i<size;i++){
            if(*(arr+i) == find){
                indices.push_back(i);
            }
        }
    if(indices.size()==0){
        cout<<"key not present";
    }
    else if(indices.size() >1){
        cout<<"Multiple occurences."<<endl;
        cout<<"Vector of indices: "<<endl;;
        for(int i=0;i<indices.size();i++){
            cout<<indices.at(i)<<endl;
        }
    }
    else{
        cout<<"One occurence"<<endl;
        cout<<"Vector of indices: "<<endl;
        for(int i=0;i<indices.size();i++){
            cout<<indices.at(i)<<endl;
        }
    }}
    else{
        cout<<"Empty array";
    }
    getch();
    return 0;
}