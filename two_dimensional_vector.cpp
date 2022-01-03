#include<bits\stdc++.h>
using namespace std;

void print(vector<vector<int>> data, string text = "")
{
    cout << text << endl;
    cout << "Total Row : " << data.size() << endl;
    for(vector<int> row:data)
    {
        cout << "\t[" << row.size() << "] ->";
        for(int column:row)
        {
            cout << column << " ";
        }
        cout << endl;
    }
}

int main()
{
    /// create
//    vector<vector<int>> data(3, vector<int> (4, 5));
//    vector<vector<int>> data({{1, 2, 3},{4, 5, 6},{7, 8, 9}});
//    vector<vector<int>> data={{1, 2, 3},{4, 5, 6},{7, 8, 9}};


//    vector<vector<int>> data(3, vector<int>(4));
//
//    data[0][0] = 1;
//    data[0][1] =2 ;
//    data[0][2] = 3;
//    data[0][3] = 4;
//
//    data[1][0] = 5;
//    data[1][1] =6 ;
//    data[1][2] = 7;
//    data[1][3] =8 ;
//
//    data[2][0] = 9;
//    data[2][1] = 10;
//    data[2][2] =11 ;
//    data[2][3] =12 ;
//    print(data);


//    vector<vector<int>> data;
//
//    vector<int> row;
//    row.push_back(5);
//    row.push_back(2);
//    row.push_back(7);
//    data.push_back(row);
//
//    vector<int> row2;
//    row2.push_back(6);
//    data.push_back(row2);
//
//    vector<int> row3;
//    row3.push_back(7);
//    row3.push_back(9);
//    data.push_back(row3);



//    vector<vector<int>> data(3, vector<int> (4));
//    for(int i = 0; i <3; i ++)
//    {
//        cout << "Row Number : " << (i + 1) << " And " <<4 <<"  Elements Are : ";
//        for(int j = 0; j < 4; j ++)
//        {
//            cin >> data[i][j];
//        }
//        cout << endl;
//    }
//
//    print(data);


      vector<vector<int>> data;
      for(int i = 0; i < 3; i ++)
      {
          vector<int> Row;
          for(int j = 0; j < 4; j ++)
          {
              Row.push_back(i*j);
          }
          data.push_back(Row);
      }

      print(data);


    return 0;
}
