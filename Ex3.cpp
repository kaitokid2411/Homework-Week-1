#include<iostream>
using namespace std;
int main(){
	int m,n;
	cin>>m>>n;
	if(m>n){
		cout<<min(m-n,n);
	}
	else{
		for(int i=m;i>=1;i--){
			if(m%i==0&&n%i==0){
				cout<<i;
				break;
			}
		}
	}
	return 0;
}
