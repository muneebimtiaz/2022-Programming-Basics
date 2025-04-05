#include <iostream>
using namespace std;
int main(){
		int cost,sell,profit,loss;
		cout<<"how much the product cost:";
		cin>>cost;
		cout<<"At what price you sold the product:";
		cin>>sell;
		if(sell>cost){
			profit=sell-cost;
			cout<<"profit:"<<profit;
		}else if(sell<cost){
			loss=cost-sell;
			cout<<"loss:"<<loss;
		}else{
			cout<<"no profit";
		}
	return 0;
}
