#include <iostream>
#include <cstdlib>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

int data;
vector<int> weight;
ifstream list("file.in",ios::in);
if(!list){
	cerr<<"failed opening"<<endl;
	exit(1);
}
while(list >> data)
	weight.push_back(data);	
int n = weight[0];
if(n<5 || n>10000){
	cout<<"Not in the range."<<endl;
	exit(1);
}
sort(weight.begin()+1,weight.end());
for(int i = 0;i<=n;i++){};
	//cout << weight[i]<<endl;
int temp = 0;
for(int i = n+1;i>=n-4;i--){
	temp = temp + weight[i];
}
cout<<temp<<endl;

return 0;
}
