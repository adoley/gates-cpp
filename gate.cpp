#include <iostream>
using namespace std;
class Gates{
	public:

	 int notGate(int input){
		if(input==0)
			return 1;
		return 0;
	  }

         int andGate(int firstInput,int secondInput){
		if(firstInput==0 || secondInput==0)
			return 0;
		return 1;
	}

	int norGate(int firstInput,int secondInput){
		if(firstInput==0 && secondInput==0)
			return 1;
		return 0;
	}

       int xorGate(int firstInput,int secondInput){
		if(firstInput==secondInput)
		 	return 0;
		return 1;
	}
       int orGate(int firstInput, int secondInput){
		if(firstInput==1 || secondInput==1)
			return 1;
		return 0; 	
	}
};
int main() 
{ 
    Gates gates;
    int result,a,b,loop=1,notA,notB,andOutput,norOutput;

   while(loop==1){
    
        cout << "\n Enter the value of A : ";
        cin >> a;
        cout << "\n Enter the value of B : ";
        cin >> b;
        
	if(a>=0 && a<=1 && b>=0 && b<=1){

		//Here you define your circuit
    		notA=gates.notGate(a);    //use not gate  
		notB=gates.notGate(b);
		andOutput=gates.andGate(notA,notB); // use and gate
		norOutput=gates.norGate(a,b); //use nor gate      
		result=gates.xorGate(andOutput,norOutput); //use xor gate
		//circuit definition ends
    		
		cout << "\n The output the circuit : ";
    		cout << result;
		cout <<"\n";
	}else{
		cout<< "\nValue of A & B should be either 1 or 0 \n";
	}

	cout << "\nPress 1 to continue or press any other key to exit : ";
    	cin >> loop;
     }
    return 0;
}
