#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i, begin, end, sum = 0;
    while(1){
        cout<< "Enter begin and end:\n";
        cin >> begin >> end;
        if (begin<=end){
            break;
        }
    }
    //int flag = 1;
    //while (flag){
        //cout << "Enter valid begin and end values:\n";
        //cin >> begin >> end;
        //if (begin<end){
        //    flag=0;
        //}
    //}
    if (begin % 2 == 1 or begin%2 == -1){
        begin++;
    }
    i = begin;
    while (i<= end){
        sum += i;
        i += 2;
    }
    
    cout << "Total is " << sum << endl;
    // TODO: prompt user for begin and end values
    // TODO: loop from begin to end and accumulate sum of even values
}
