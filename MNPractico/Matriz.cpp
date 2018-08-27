#include<iostream>
#include<cmath>

using namespace std;

int EGauss ( int a[3][3], int b[3]);
int mostrarMatriz(int a[3][3]);

int main(){
setlocale(LC_ALL, "spanish");
int a[3][3]={1,2,4,
	     2,3,6,
	     5,5,9}; 

int b[3]={1,2,3};

mostrarMatriz(a);
EGauss(a,b);
mostrarMatriz(a);
}


int EGauss( int a[3][3], int b[3])
{


for(int i=1; i<=2;i++)
{
	if(abs(a[i][i]<eps)
	{
		for(j=i+1;j<=3;j++)
		{
		if(abs(a[]>eps){
				for(int k 
				}

	}
	for(int j=i+1; j<=3;j++)
		{
		float f;
		f=-a[j][i]/a[i][i];
		for(k =i;i<=3;k++)
			{
			a[j][k]=a[j][k]+(f*a[i][k]);
			}
		b[j]=b[j]+(f*b[i]);
		}
}
return 0;
}





int mostrarMatriz(int a[3][3]){

	for (int i=0;i<3;i++)
	{	
		for (int j=0;j<3;j++)
		{	
			cout<<a[i][j]<<endl;		
 
		}
 		
	}
	
	return 0;
}



