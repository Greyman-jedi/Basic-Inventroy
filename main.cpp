#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    int a;
    char item [10];
    
    cout << "Please add the names of your inventory." << endl;
    cin.getline (item, 10);
    cout << "Enter the how many"<< endl;
    cin >> a;
    cout << "Item is: "<<  item << ", "<< a << " are in inventory."<< endl;

    return 0;
}
