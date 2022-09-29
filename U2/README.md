# UP210300_CPP

**UNIT 2**

Exersice 1.-Program that use compaired if to tell the user how much taxes they have to pay.
 
///c++
    //Declaring variables
    float income, taxToPay;
    int percentage;

    //Ask the user for their income
    cout << "Please enter your annual rent: ";
    cin >>income;
    
    
    //Look for the tax rate acording to the income
    if (income<10000){
        percentage=5;
    }
    else if (income>=10000 && income<20000){
        percentage=15;
    }
    else if (income>=20000 && income<35000){
        percentage=20;
    }
    else if (income>=35000 && income<60000){
        percentage=30;
    }
    else if (income>=60000){
        percentage=45;
    }
    
    
    //Operation of how much the user have to pay acording to the tax rate and print the result
    taxToPay=income*percentage/100;
    cout << "Your tax rate is: " <<percentage;  cout << "%\n";
    cout << "You have to pay: " <<taxToPay;  cout << " $" <<endl;
///

Code explanation

This program askd the user for its annual income and displays the tax rate thet corresponds and how much they have to pay, for that we implement a composite if. Firts of all we declare three variables, one for the income(income), another one for the amount they have to pay(taxToPay) and one to save the percentage of the tax rate(percentage). Then we have to ask the user for its income and save it on income variable. Then we use "if" and "else if" statement to compare the income to the tax rate. Once one of the staments is true it executes the operation to know how much the user has to pay (taxToPay=income*percentage/100). Finaly it is display on to the scren the tax rate and the amount to pay.



    
