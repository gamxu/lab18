#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

vector<int> randomVector(unsigned int N){	
    vector<int> v(N);
	for(unsigned int i = 0; i < N; i++) v[i]=(rand()%10);
    return v;
}

void showVector(vector<int> w){
	cout << "[";
	for(unsigned int i = 0; i<=4; i++){
		cout << w[i];
		if(i==4) cout << "]";
		else cout << " ";
	}
}

int dotProduct(vector<int> j,vector<int> k){
	int sum = 0;
	for(unsigned int i = 0; i < j.size(); i++) sum += (j[i])*(k[i]);	
	return sum;
}


int main(){
	srand(time(0));
	vector<int> x = randomVector(5);
	vector<int> y = randomVector(5);
	int z = dotProduct(x,y);
	showVector(x);
	cout << " . ";
	showVector(y);
	cout << " = " << z;
	
	return 0;
}