#include<iostream>
using namespace std;

void myString(char *(&q), int N){
	q = new char[N];    
	for(int i = 0; i < N;i++) q[i] = 'A'+ i;
	q[N] = 0;
}

int main(){
	char *p;
	int N;	
	cout << "N = ";
	cin >> N;		
	myString(p,N);
	cout << p;	
	delete [] p;
	return 0;
}
