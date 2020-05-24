#include<bits/stdc++.h>
using namespace std;


int countFq(string str, char ch){
	int count=0;
	
	for(int i=0;i<str.length();i++){
		 if(str[i] == ch)
		   count++;
	}
	
	 return count;
}






void sortArr(string str){
	int n = str.length();
	
	vector< pair<int,char> > vp;
	
	for(int i=0;i<n;i++){
		
		vp.push_back( make_pair( countFq(str,str[i]) , str[i] ) );
	}
	
	sort(vp.begin(),vp.end());
	
	for(int i=0;i<n;i++)
	cout<<vp[i].second;
	
	
}



int main(){
	string str;
	cout<<"Enter the string\n";
	cin>>str;
	
	sortArr(str);
}
