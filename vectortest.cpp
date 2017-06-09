#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv) { 

vector< vector<int> > matrix;
cout << "Filling matrix with test numbers.";
for (int i = 0; i < 4; i++)
{
    vector<int> temp;
    for (int j = 0; j < 4; j++)
    {
        temp.push_back(5);
    }
    matrix.push_back(temp);
}

}