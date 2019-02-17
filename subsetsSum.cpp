#include<iostream>
#include<vector>
using namespace std;

int recur(vector<int> a, int i, int sum, int k){
	
	if(sum == k)
		return k;
	else{
		for(int j=i, l=0; j<a.size(); j++){
			l = sum + a[j];
			if((j<a.size()) & (recur(a, j+1, l, k) == k))
				return k;
		}
		return 0;
	}
}


int main(){

	int count =0, k=0;
	cin>>count>>k;
	
	vector<int> a;
	for(int i=0; i<count; i++){
		int temp = 0;
		cin>>temp;
		a.push_back(temp);
	}
		
	if(recur(a, 0, 0, k) == k)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;

return 0;
}
