#include<bits/stdc++.h>
using namespace std;

void print(vector<int> data)
{
    cout << "Total Elements : " << data.size() << endl;
    for(int datam:data)
    {
        cout << datam << " " ;
    }
    cout << endl<< endl;
}

int main()
{
  //  vector<int> vect();
//    print(vect);

    //vector<int> vect(5);
    //print(vect);

    //vector<int> vect(5, 2);
    //print(vect);

    //vector<int> vect({1, 2, 3, 4, 5});
    //print(vect);

    //vector<int> vect = {1, 2, 3, 4,5};
    //print(vect);

    /// add elements in vector

//    vector<int> data = {3,4};
//    data.push_back(5);
//    data.push_back(6);
//    data.push_back(7);
//    data.push_back(8);
//    print(data);

//    vector<int> data = {1,2,3};
////    data.insert(data.begin(), 7);
////    data.insert(data.begin()+2, 7);
//
////       data.insert(data.end(), 7);
////        data.insert(data.end() - 1, 7);
//data.insert(data.begin() + 1, 2, 7);
//    print(data);

/// Read

//    vector <int> data = {1, 2, 3, 4, 5};
//    cout << data[2] <<endl;
//    cout << data.front() << endl;
//    cout << data.back() << endl;

    /// Print

//    vector <int> vect = {1, 2, 3, 4, 5,67};
//    for(int data: vect)
//    {
//        cout << data << " ";
//    }

//    vector <int> vect = {1, 2, 3, 4, 5, 6, 7};
//    int length = vect.size();
//
//    for(int i = 0; i < length; i++)
//    {
//        cout << vect[i] << " ";
//    }

//
//      vector <int> vect = {1, 2, 3, 4, 5};
//      int *data = vect.data();
//      cout << data[2];

 /// delete
            vector <int> vect = {1, 2, 3, 4, 5, 6, 7};
//            vect.pop_back();

            vect.clear();
            print(vect);


    return 0;
}
