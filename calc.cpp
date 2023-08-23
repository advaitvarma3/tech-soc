#include<iostream>


using namespace std;

int main()
{
    int num;
    cout << "Press 1 for algebraic calculator" << endl;
    cout << "Press 2 for trigonometric calculator" << endl;
    cin >> num;
    if(num == 1)
    {
        int number;
        
        cout << "Press 1 for addition" << endl;
        cout << "Press 2 for subtraction" << endl;
        cout << "Press 3 for division" << endl;
        cout << "Press 4 for multiplication" << endl;
        
        cin >> number;
        
        if(number == 1){
            double number1;
            double number2;
            cout << "Enter 1st number" << endl;
            cin >> number1;
            cout << "Enter 2nd number" << endl;
            cin>> number2;
            cout << "Sum is: " << number1 + number2 << endl;}
        else if(number == 2){
            double numb1;
            double numb2;
            cout << "Enter 1st number" << endl;
            cin >> numb1;
            cout << "Enter 2nd number" << endl;
            cin>> numb2;
            cout << "Difference of 1st and 2nd number is: " << numb1 - numb2 << endl;}
        else if(number == 3){
            double nu1;
            double nu2;
            cout << "Enter 1st number" << endl;
            cin >> nu1;
            cout << "Enter 2nd number" << endl;
            cin>> nu2;
            cout << "Division of 1st number by 2nd number gives" << nu1/nu2 << endl;}
        else if(number == 4){
            double numbe1;
            double numbe2;
            cout << "Enter 1st number" << endl;
            cin >> numbe1;
            cout << "Enter 2nd number" << endl;
            cin>> numbe2;
            cout << "Product of 2 numbers is: " << numbe1*numbe2 << endl;}
        
        
    }
    else if(num ==2){
        int numr;
        cout << "Press 1 to calculate sin " << endl;
        cout << "Press 2 to calculate cos " << endl;
        cout << "Press 3 to calculate tan " << endl;
        cout << "Press 4 to calculate cot " << endl;
        cout << "Press 5 to calculate sec " << endl;
        cout << "Press 6 to calculate cosec " << endl;

        cin >> numr;

        if(numr==1)
        {
          double g;
          cout << "Enter the angle in degree " << endl;
          cin >> g;

          double a = g*3.14/180;

          cout << a - (a*a*a)/(3*2*1) + (a*a*a*a*a)/(5*4*3*2) - (a*a*a*a*a*a*a)/(7*6*5*4*3*2) << endl;

        }
        if(numr==2)
        {
            double d;
          cout << "Enter the angle in degree " << endl;
          cin >> d;
         double b = d*3.14/180;

          cout << 1 - (b*b)/(2*1) + (b*b*b*b)/(4*3*2) -(b*b*b*b*b*b)/(6*5*4*3*2) << endl;
        }
        if(numr==3)
        {
            double e;
          cout << "Enter the angle in degree " << endl;
          cin >> e;
          double x = e*3.14/180;

          cout << x + (x*x*x)/3 + 2*(x*x*x*x*x)/15 + 17*(x*x*x*x*x*x*x)/315 + 62*(x*x*x*x*x*x*x*x*x)/2835 << endl;
        }
        if(numr==4)
        {
          double h;
          cout << "Enter the angle in degree " << endl;
          cin >> h;
                    double y = h*3.14/180;

          cout << 1/y - y/3 - (y*y*y)/45 - 2*(y*y*y*y*y)/945 << endl;

        }
        if(numr==5)
        {
            double j;
          cout << "Enter the angle in degree " << endl;
          cin >> j;
                    double z = j*3.14/180;

          cout << 1 + (z*z)/2 + 5*(z*z*z*z)/24 + 61*(z*z*z*z*z*z)/720 << endl;

        }
        if(numr==6)
        {
            double k;
          cout << "Enter the angle in degree " << endl;
          cin >> k;
                    double u = k*3.14/180;
          cout << 1/u + u/6 + 7*(u*u*u)/360 + 31*(u*u*u*u*u)/15120 << endl;

        }
    }
}