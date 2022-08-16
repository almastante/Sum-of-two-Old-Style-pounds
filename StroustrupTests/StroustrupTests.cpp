#include <iostream>
using namespace std;
// 1shilling = 12 pense
// 1pound = 20 shilling

int wmain()
{
    int pound = 0;
    int pence = 0;
    int shilling = 0;
    char dot= 'a';
    int temp = 0;
    char turp = 'j';
    
    while (turp != 'n') {
        cout << "Enter 1st amount: ";
        cin >> pound >> dot >> shilling >> dot >> pence;
        for (int i = pound; i > 0; i--) shilling += 20;
        for (int i = shilling; i > 0; i--) pence += 12;
        temp = pence;

        cout << "Enter 2nd amount: ";
        cin >> pound >> dot >> shilling >> dot >> pence;
        for (int i = pound; i > 0; i--) shilling += 20;
        for (int i = shilling; i > 0; i--) pence += 12;
        pence += temp;            //pence now holds both moneys together


        temp = pence % 12;       //temp has the right pence
        shilling = pence / 12;   //shilling holds all
        pence = temp;            //pence has the right pence
        temp = shilling % 20;    //temp has the righ shilling
        pound = shilling / 20;   //pound has the right pound
        shilling = temp;         //shilling has the right shilling
        cout << "Sum: " << pound << "." << shilling << "." << pence;

        cout << "\nDo you wish to continue (y/n): ";
        cin >> turp;
    }
    


    return 0;
}