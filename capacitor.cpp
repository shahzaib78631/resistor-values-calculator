//-------------------------------------------------------------------------------------------
//
//                              Welcome To My Program
//                              Created By: Shahzaib Ali
//
//
//--------------------------------------------------------------------------------------------
//
// Header Files
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

// Using Namespace std Because I Don't
// Want To Add std prefix with cout, cin and endl etc :D
using namespace std;

//Start Of Function Main.
int main(){
    // Creating Integer Type Variables
    int select,
        nCp,
        nRstr,
        i;

    char exit;
    cout<<"|-------------------------------------------------------------|"<<endl;
    cout<<"| ---------------- WELCOME TO MY PROGRAM -------------------- |"<<endl;
    cout<<"|-------------------------------------------------------------|"<<endl;

do {
    //Displaying Options On Screen.
    cout<<"|-------------------------------------------------------------|"<<endl;
    cout<<"|            1. For Total Capacitance In Parallel             |"<<endl;
    cout<<"|            2. For Total Capacitance In Series               |"<<endl;
    cout<<"|            3. For Total Resistance In Parallel              |"<<endl;
    cout<<"|            4. For Total Resistance In Series                |"<<endl;
    cout<<"|            5. For Resistance From Color Codes               |"<<endl;
    cout<<"|-------------------------------------------------------------|"<<endl;
    cout << "Enter your choice :  ";
    cin  >> select;

    // Start Of If Condition
    if (select == 1){
        //-----------------------------
        // Total Capacitance In Parallel
        //-----------------------------
        //
        // Asking User To Enter Total Number
        // Of Capacitors (nCp) They Want To Calculate.
        cout << "How Many Capacitors: ";
        cin >> nCp;

        // Creating Type Double Array Named Capacitors
        // With User Inputed Elements (i.e Number Of Capacitors nCp)
        // And Type Double Variable Named Total For Storing Answer.
        double  capacitors[nCp],
                total=0;

        // Using For Loop To Add Value
        // In Each Number Of Capacitors.
        for (int i=1; i<=nCp; i++){
            cout << "Value Of Capacitor " << i << ": ";
            cin >> capacitors[i];
            total += capacitors[i];
        }

        //Display Answer On The Screen
        cout << "Your Total Capacitance is: " << total << " Farad";

    } else if (select == 2){
        //----------------------------
        //Total Capacitance In Series
        //----------------------------
        //
        // Asking User To Enter Total Number
        // Of Capacitors (nCp) They Want To Calculate.
        cout << "How Many Capacitors: ";
        cin >> nCp;

        // Creating Type Double Array Named Capacitors
        // With User Inputed Elements (i.e Number Of Capacitors nCp)
        // And Type Double Variable Named Total For Storing Results.
        double  capacitors[nCp],
                total=0;

        // Using For Loop To Add Value In Each Number
        // Of Capacitors And To Calculate Total.
         for (i=1; i<=nCp; i++){
            cout << "Value Of Capacitor " << i << ": ";
            cin >> capacitors[i];

        // Easy Approach Because I Am Lazy :D
        // Dividing Each Capacitor Value with 1
        // and Adding The Answers.
        // 1/c = 1/c1 + 1/c2 + 1/c3 .....
          total += 1/capacitors[i];
        }
        // C(total) = 1/c
          total = 1/total;

        //Display Answer On The Screen.
        cout << "Your Total Capacitance is: " <<setprecision(3) << total << " Farad";

    } else if (select == 3){
        //----------------------------
        //Total Resistance In Parallel
        //----------------------------
        //
        // Asking User To Enter Total Number
        // Of Resistors (nRstr) They Want To Calculate.
        cout << "How Many Resistors: ";
        cin >> nRstr;

        // Creating Type Double Array Named Resistors
        // With User Inputed Elements (i.e Number Of Resistors nRstr)
        // And Type Double Variable Named Total For Storing Results.
        double  Resistors[nRstr],
                total=0;

        // Using For Loop To Add Value In Each Number
        // Of Resistor And To Calculate Total.
        for (i=1; i<=nRstr; i++){
            cout << "Value Of Resistors " << i << ": ";
            cin >> Resistors[i];

        // Easy Approach Because I Am Lazy :D
        // Dividing Each Resistor Value with 1
        // and Adding The Answers.
        // 1/r = 1/r1 + 1/r2 + 1/r3 .....
          total += 1/Resistors[i];
        }
        // R(total) = 1/r
          total = 1/total;

        //Display Answer On The Screen.
        cout << "Your Total Resistance is: " << setprecision(3) << total << " Ohm";

    } else if (select == 4){
        //------------------------------
        //For Total Resistance In Series
        //------------------------------
        //
        // Asking User To Enter Total Number
        // Of Resistors (nRstr) They Want To Resistors.
        cout << "How Many Resistors: ";
        cin >> nRstr; //nRstr = Number of Resistors

        // Creating Type Double Array Named Resistors
        // With User Inputed Elements (i.e Number Of Resistors nRstr)
        // And Type Double Variable Named Total For Storing Answer.
        double  Resistors[nRstr],
                total=0;

        // Using For Loop To Add Value
        // In Each Number Of Resistors
        // And Calculating The Sum.
        for (int i=1; i<=nRstr; i++){
            cout << "Value Of Resistors " << i << ": ";
            cin >> Resistors[i];

        // R(total) = r1 + r2 + r3 + .......
            total += Resistors[i];
        }

        //Display Answer On The Screen.
        cout << "Your Total Resistance is: " << total << " Ohm";

    //End Of If Condition.
    } else if (select == 5){
        //------------------------------
        //For Resistance From Color Codes
        //------------------------------
        //
        //Declaring String Type Variables
        //So User Can Input Color Band Names
        //i.e. black,brown,red,orange,yellow,green,blue,violet,Grey,white
        //tolerance: gold/silver
        string first,second,third,tolerance;
        char selected;
        //Declaring Integer Type Variables
        //Which Contain Band Color Values
        //i.e. for black = 0,red = 1 etc
        int Band1,Band2,Band3;
        //Declaring Float Type Variables
        float resistor,resistor_with_tolerance,max_value,min_value;
        float Tolerance = 0.0;

        cout << "Enter First Band Color Of Resistor: ";
        cin  >> first;
        cout << "Enter Second Band Color Of Resistor: ";
        cin  >> second;
        cout << "Enter Third Band Color (Multiplier): ";
        cin  >> third;
        cout << "Enter Fourth Band Color (Tolerance) Of Resistor: ";
        cin  >> tolerance;

    //If Condition For First Band
    if (first == "black"){
        Band1 = 0;
        }
        else if (first == "brown"){
        Band1 = 1;
        }
        else if (first == "red"){
        Band1 = 2;
        }
        else if (first == "orange"){
        Band1 = 3;
        }
        else if (first == "yellow"){
        Band1 = 4;
        }
        else if (first == "green"){
        Band1 = 5;
        }
        else if (first == "blue"){
        Band1 = 6;
        }
        else if (first == "violet"){
        Band1 = 7;
        }
        else if (first == "grey"){
        Band1 = 8;
        }
        else if (first == "white"){
        Band1 = 9;
        }
        else
        cout << "Input Band Color Name In Small Letters";
    //If Condition For Second Band
    if (second == "black"){
        Band2 = 0;
        }
        else if (second == "brown"){
        Band2 = 1;
        }
        else if (second == "red"){
        Band2 = 2;
        }
        else if (second == "orange"){
        Band2 = 3;
        }
        else if (second == "yellow"){
        Band2 = 4;
        }
        else if (second == "green"){
        Band2 = 5;
        }
        else if (second == "blue"){
        Band2 = 6;
        }
        else if (second == "violet"){
        Band2 = 7;
        }
        else if (second == "grey"){
        Band2 = 8;
        }
        else if (second == "white"){
        Band2 = 9;
        }
        //If Condition For Third Band
    if (third == "black"){
        Band3 = 0;
        }
        else if (third == "brown"){
        Band3 = 1;
        }
        else if (third == "red"){
        Band3 = 2;
        }
        else if (third == "orange"){
        Band3 = 3;
        }
        else if (third == "yellow"){
        Band3 = 4;
        }
        else if (third == "green"){
        Band3 = 5;
        }
        else if (third == "blue"){
        Band3 = 6;
        }
        else if (third == "violet"){
        Band3 = 7;
        }
        else if (third == "grey"){
        Band3 = 8;
        }
        else if (third == "white"){
        Band3 = 9;
        }
        //If Condition For Tolerance
    if (tolerance == "gold"){
        Tolerance = 0.05;
        }
        else if (tolerance == "silver"){
        Tolerance = 0.1;
        }

        //Calculating Resistor
        resistor  = 10 * Band1;
        resistor += Band2;
        resistor *= pow(10,Band3);

        //Calculating Resistance With Tolerance
        resistor_with_tolerance = resistor*Tolerance;

        //Calculating Maximum And Minimum
        max_value = resistor + resistor_with_tolerance;
        min_value = resistor - resistor_with_tolerance;

        //Result
        cout << "\n\n";
        cout << "Resistor: " << resistor << "  ohm" <<endl;
        cout << "Max value: " << max_value <<endl;
        cout << "min value : " << min_value <<endl;
        cout << "\n\n";
    }
        //Asking User For Exit
        cout << "\nDo You Want To Exit (Y/N): ";
        cin  >> exit;

    }while(exit != 'y');

    //Stops Screen Until User Press Any Key
    //getch();

    return 0;
} //End Of Function Main.