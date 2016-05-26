#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int findRank(string A) {
    string str=A;
    int n=str.length();
    vector<int> arr;
    long long int ans=0;
    for(int i=0;i<n-1;i++){
        int k=0;
        char c=str[i];
        for(int j=i+1;j<n;j++){
            if(str[j]<c) k++;
        }
        arr.push_back(k);
    }
    int mul=1;
    int z=2;
    for(int i=arr.size()-1;i>=0;i--){
        ans+=(arr[i]*mul)%1000003;
        ans=ans%1000003;
        mul=mul*z;
        mul=mul%1000003;
        z++;
    }
    int a = ans+1;
    return a;
}

int main(){
    string str="ZCSFLVHXRYJQKWABGT";
    int a=findRank(str);
    cout<<a<<endl;
    return 0;
}