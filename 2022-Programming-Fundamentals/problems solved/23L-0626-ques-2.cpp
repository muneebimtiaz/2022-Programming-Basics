#include <iostream>
using namespace std;

int main() {
    int numberOfItems;
    cout<<"Enter the total number of items in the cart: ";
    cin>>numberOfItems;

    double total=0;
    
    
    int itemNumber=1;
    while(itemNumber<=numberOfItems){
        double price;
        int quantity;
        double subtotal=0;

        cout<<"Item "<<itemNumber<<":"<<endl;
        cout<<"Price (Rs.): ";
        cin>>price;
        cout<<"Quantity: ";
        cin>>quantity;
        subtotal+=price*quantity;
        cout<<"subtotal of item:"<<subtotal<<endl;

        total+=price*quantity;
        itemNumber++;
    }

    double discount = 0.0;
    if(total>1000) {
        discount=0.10*total;
    }
    int shippingFee;

    if(total<500){
        shippingFee=50;
    }

    double totalCost =total-discount+shippingFee;
    cout<<"total: Rs." << total<<endl;
    cout<<"Discount (10%): Rs."<<discount<<endl;
    cout<<"Shipping Fee: Rs."<<shippingFee<<endl;
    cout<<"Total Cost: Rs."<<totalCost<<endl;

    return 0;
}
