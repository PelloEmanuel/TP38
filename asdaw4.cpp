#include<iostream>
#include<string>
using namespace std;

bool EsMultiploDe17(int a);

int main(){
	string msg="NO ES MULTIPLO";
	int n1; int n2=17;
	int M;
	cout<<"ingrese un numero"<<endl;
	cin>>n1;
	if(EsMultiploDe17(n1))
    {
	 msg= "Es multiplo";
	 }	
	 cout<<msg<<endl;
	
	return 0;
}

bool EsMultiploDe17(int a){
	
	bool flag=false;
	if(a%17==0)
	{
		flag=true;
	}
	
	return flag;
}


