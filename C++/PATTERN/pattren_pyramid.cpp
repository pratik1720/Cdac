
#include<iostream>
using namespace std;
int main(){
	int row,col;
	cin>>row>>col;
	for(int i=0;i<row;i++){
		for(int k=row-i; k>=1;k--){
			cout<<" ";
		}
		for(int j=0;j<=i;j++){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
}
