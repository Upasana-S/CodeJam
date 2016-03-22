//Standing Ovation
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

//void output(int i, int f);
int main()
{ofstream op;ifstream ip;
ip.open("SOL.in");
op.open("output.txt");

int n,S,x=1,f,sum=0; string line; char *audi;
 getline(ip,line);
 n=int(line[0]);
 while(getline(ip,line))
 {S=int(line[0])-48; audi= &line[2]; f=sum=0; 
  for(int i=0;i<=S;i++)
  	{ sum+=(*(audi+i)-48);
  		if(sum<(i+1))
  			{f+=((i+1)-sum);
  			  sum+=(i+1)-sum;
  			}
  	}	
  op<<"Case #"<<x<<": "<<f<<endl;
 cout<<"Case #"<<x<<": "<<f<<endl;
 x++;

 }
	ip.close();
	op.close();
	
}
/*void output(int i, int f)
{op<<"Case#"<<i<<": "<<f;
 cout<<"Case#"<<i<<": "<<f;
}*/
