#include<bits\stdc++.h>
using namespace std;

int main()
{

    /// Get input from user for vector
    vector <int> aspin;
    int total_elements;
    cout << "Enter Number of elements : ";
    cin >> total_elements;
    int i = 0;

    cout << "Enter " << total_elements << " Elements: " << endl;
    while(i<total_elements)
    {
        int d;
        cin >> d;
        aspin.push_back(d);
        i++;
    }


    /// reverse all element in vector

    // way number one : reverse data
//    vector <int> new_vector;
//
//    for(int i = total_elements - 1;i >=0; i --)
//    {
//        new_vector.push_back(aspin[i]);
//    }

    // way number two : reverse data
    vector <int> new_vector;



    while(!aspin.empty())
    {
        int last_element = aspin.back();
        new_vector.push_back(last_element);
        aspin.pop_back();
    }


    /// show vector each element

    int length= new_vector.size();
    for(int i = 0; i < length; i ++)
    {
        cout << new_vector[i] << " ";
    }


    return 0;
}
