#include<bits/stdc++.h>
using namespace std;

void checkTypeOfTriangle(int a,int b,int c){
	
	int sqa = pow(a,2);
	int sqb = pow(b,2);
	int sqc = pow(c,2);
	
	if(sqa == sqb + sqc || sqb == sqc+sqa || sqc == sqa+sqb){
		cout<<"Right-angled"<<endl;
		
	}
	else if(sqa > sqc + sqc || sqb > sqc+ sqa || sqc > sqa + sqa){
		cout<<"Obtuse-angled"<<endl;
	}
	else cout<<"Acute-angled"<<endl;
}




int main(){
	int a,b,c;
	cin>>a>>b>>c;
	
	checkTypeOfTriangle(a,b,c);
	return 0;
}
