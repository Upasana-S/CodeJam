// Code Jam practice 1
// Store Credit
#include<iostream>
#include<fstream>
using namespace std;
void StoreCredit(int n,int c,int l, int I[]);
int main()
{char c;
 int C,L,I[100],n=0;
do{ n++;
	cout<<"Enter the amount of credit";cin>>C;
	cout<<"Enter the number of items";cin>>L;
	cout<<"Enter "<<L<<" items";
	for(int i=0; i<L; i++)
		cin>>I[i];
	StoreCredit(n,C,L,I);	
	cout<<"Do you want to continue?:";
	cin>>c;
}while(c=='y');
}
void StoreCredit(int n,int c,int l, int I[])
{ for(int i=0; i<l;i++)
	for(int j=0; j<l;j++)
		{if(I[i]<c && I[j]<c&& j!=i)
			if(I[i]+I[j]==c)
				{cout<<" Case# "<<n<<": "<< i+1<<" "<<j+1<< endl; return;
				}
		}

}


