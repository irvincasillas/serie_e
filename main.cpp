#include <iostream>
#include <cmath>
using namespace std;
//double suma = 1.0;
//	for (int i = 1; i <=10; i++){
  //   int factorial = i;
    // for (int j = i - 1; j > 1; j--)
      //      factorial *= j;
        //suma += 1/(float)factorial;
int main()
{
	double suma = 1.0;
	int i = 1 , f = 1 ; 
	while(i<=10)
	{
			f = f * i;
            suma +=  + (1/(float)f);
            i++;
	}
    cout<<"El valor estimado de e = "<<suma<<endl;

	int n ; 
	double sumaex = 1.0;
	f = 1 ;
	cout<<"e^ = ";
	cin>>n ; 
	for (int x = 1 ; x<= n ; x++)
		{
			f = f * x ;
			sumaex += (pow(n,x)/(float)f);
		}
	cout<<"el valor de e^"<<n<<"es: "<< sumaex; 
    return 0 ;

}

