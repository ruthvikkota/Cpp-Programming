#include<bits/stdc++.h>
using namespace std;
double perkg[1001];
bool cmp(const pair<int,double> &a,const pair<int,double> &b) {
	if(a.second>b.second)
		return true;
	return false;
}
int main() {
	vector<pair<int, double> > vect;
	int n=6;
	int fval=0;
	int wt[n]={1,2,1,2,3,3};
	int val[n]={10000,40000,8000,8000,15000,19000};
	int W=5;
	for(int i=0; i<n; i++) {
		perkg[i]=val[i]/wt[i];
	}
	for (int i=0; i<n; i++)
		vect.push_back( make_pair(wt[i],perkg[i]));
	sort(vect.begin(), vect.end(), cmp);
	for (int i=0; i<n; i++) {
		cout <<"{"<<vect[i].first << ","<< vect[i].second <<"}"<<endl;
	}
	for(int i=0; i<n; i++) {
		while(W!=0 && vect[i].first!=0) {
			W=W-1;
			vect[i].first--;
			fval=fval+vect[i].second;
		}
	}
	cout<<"\nthe final maximised value is "<<fval;
}
