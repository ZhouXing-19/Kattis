
// C++ program to illustrate 
// map::insert({key, element}) 
#include <map>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 

void show(vector< vector<int> > v){
    for(int i=0;i<3;i++){   
        for(int j=0;j<4;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
}
}

bool comlast(vector<int> v1, vector<int> v2){
    return v1[v1.size()-1]<v2[v2.size()-1];
}

int main(){ 
  vector< vector<int> > v1;
  for(int i=0;i<3;i++){
    vector<int> demo;
    for(int j=0;j<4;j++){
        int num;
        cin>>num;
        demo.push_back(num);
    }
    v1.push_back(demo);
  }
  show(v1);
  
  sort(v1.begin(),v1.end(),comlast);
  show(v1);return 0;
} 
