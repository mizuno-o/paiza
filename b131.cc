#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){

	int n,m;
	cin >> n >> m;
	vector<vector<int> > a(n,vector<int>(m));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			int ai;
			cin >> ai;
			a.at(i).at(j) = ai;
		}
	}
	int x;
	cin >> x;
	vector<vector<int> > rs(2,vector<int>(x));
	for(int k=0;k<x;k++){
		int r,s;
		cin >> r >> s;
		rs.at(0).at(k) = r-1;
		rs.at(1).at(k) = s-1;
	}
	
	int count = 0;
	int now_eki = 0;
	for(int i=0;i<x;i++){
		int rosen = rs.at(0).at(i);
		int eki = rs.at(1).at(i);
		count += abs(a.at(rosen).at(eki) - a.at(rosen).at(now_eki));
		//cout<< "i:" << i+1 << " count:"  << count <<endl;
		now_eki = eki;
	}
	cout << count <<endl;
	return 0;
}
