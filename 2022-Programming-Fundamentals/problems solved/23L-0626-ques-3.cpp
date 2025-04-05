#include <iostream>
using namespace std;

int main() {
    char gender;
    double bodyWeight, wristMeasurement, waistMeasurement, hipMeasurement, forearmMeasurement;
    double bodyFat, bodyFatPercentage;

    cout<<"Enter gender (M/F): ";
    cin>>gender;

    if(gender=='F'||gender=='f'){
        cout<<"Body weight (in pounds): ";
        cin>>bodyWeight;
        cout<<"Wrist measurement (in inches): ";
        cin>>wristMeasurement;
        cout<<"Waist measurement (in inches): ";
        cin>>waistMeasurement;
        cout<<"Hip measurement (in inches): ";
        cin>>hipMeasurement;
        cout<<"Forearm measurement (in inches): ";
        cin>>forearmMeasurement;

        double a1=(bodyWeight*0.732)+8.987;
        double a2=wristMeasurement/3.140;
        double a3=waistMeasurement*0.157;
        double a4=hipMeasurement*0.249;
        double a5=forearmMeasurement*0.434;
        double b=a1+a2-a3-a4+a5;

        bodyFat=bodyWeight-b;
        bodyFatPercentage=(bodyFat*100)/bodyWeight;

    } else if(gender=='M'||gender=='m'){
        cout<<"Body weight: ";
        cin>>bodyWeight;
        cout<<"Wrist measurement: ";
        cin>>wristMeasurement;

        double a1=(bodyWeight*1.082)+9.442;
        double a2=wristMeasurement*4.15;
        double b=a1-a2;

        bodyFat=bodyWeight-b;
        bodyFatPercentage=(bodyFat*100)/bodyWeight;

    }else{cout<<"Invalid gender input. Please enter 'M' or 'F'."<<endl;}

    cout<<"Body Fat Calculation:"<<endl;
    cout<<"Body fat: "<<bodyFat<<" pounds"<<endl;
    cout<<"Body fat percentage: "<<bodyFatPercentage<<"%"<<endl;
    return 0;
}
