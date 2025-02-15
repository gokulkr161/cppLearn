#include <iostream>
using namespace std;
int main() {
    double num;
    double* ptr=&num;
    cout << "Location of the memory where num is stored is:"<< &num<<endl;
    cout << "Location of the memory where num is stored is:"<< ptr<<endl;
    cout << "enter number"<<endl;
    cin >> num;
    //cout << "Good number "<<num <<endl;
    int yy;
    int y_1;
    y_1=yy+1;
    cout <<y_1<<endl;
    return 0;
}
