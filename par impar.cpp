#include<bits/stdc++.h>
using namespace;
vector<int>Generarvector(vector<int>A, int n);
vector<int>ParImpar(vector<int>A);
void Mostrarvector(vector<int>A);
int main(){
	int vector<int>A;
	int n;
	vectorA=Generarvector(vectorA,n);
	Resultado=ParImpar(A);
	Mostrarvector(A);
	cout<<"Ingrese la cantidad de elementos del vector"<<endl;
	cin>>n;
	return 0;
}
vector<int>Generarvector(vector<int>A, int n){
	int i,e;
	srand(time(NULL));
	for(i=0; i<n; i++){
	e=rand()%30;
	A.push_back(e);
	}
	return A;
}
vector<int>ParImpar(vector<int>A){
	int i, int par=0; int impar=0;
	vector<int>ParImpar;
	for(i=0; i<A.size(); i++){
		if(A[i]%2==0){
			par+=A[i];
		}
		else (A[i]%2==0){
			impar+=A[i];
		}
	}
	ParImpar.push_back(par);
	ParImpar.push_back(impar);
	return ParImpar;
}
void Mostrarvector(vector<int>A){
	int i;
	for(i=0; i<A.size(); i++){
		cout<<A[i]<<"/"<<endl;
	}
	return A;
}
