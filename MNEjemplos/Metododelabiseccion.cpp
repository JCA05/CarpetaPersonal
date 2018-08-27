#include<iostream>
#include<cmath>


using namespace std;

double funcion(double a);

//double buscarraiz(double parametro);

int main(){

	double a;
	double b;
	double c;
	double ep;
	int x=1;
	int i=0;

cout<<"ingrese el primer número del intervalo"<<endl;
cin>>a;
cout<<"ingrese el segundo número del intervalo"<<endl;
cin>>b;
cout<<endl;
cout<<"ingrese epsilon"<<endl;
cin>>ep;


do{
	if(funcion(a)*funcion(b)<0){
	  c=(a+b)/2;
	  i++;
		if(abs(funcion(c))<ep){
		cout<<"Se encontro la raiz y es "<<c<<endl;
		x=0;
		}
		else{
		
		cout<<i<<" "<<abs(funcion(c))<<endl;

			if(funcion(a)*funcion(c)>0){
			a=c;		
			}
			else{
			b=c;
			}
		}
	}

	else{
	cout<<"No se encontraron un numero de raices impares o no hay raices!"<<endl;
	}	  
		
	
}while(x!=0);	



return 0;

}

double funcion(double x){

return exp(-x)-x;

}
