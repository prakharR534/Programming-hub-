#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  float annual_salary, total_cost ,portion_saved,semi_annual_raise;
  cin>>annual_salary>>total_cost>>portion_saved>>semi_annual_raise;
  int count=0;
  
float portion_down_payment = total_cost *0.25;

float current_savings=0;


while(current_savings < portion_down_payment){
  
  current_savings += current_savings * 0.04 / 12  + annual_salary*portion_saved/12;
   count++;
  if(count % 6==0){
    annual_salary += annual_salary * semi_annual_raise;
  }
 
}
  
  
  cout<<count;
  return 0;
}
