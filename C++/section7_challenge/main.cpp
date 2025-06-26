#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector <int> vector1, vector2;
    vector1.push_back(10);
    vector1.push_back(20);
    cout << "Vector1: {" << vector1.at(0) << "," << vector1.at(1) <<"}\n"
            "its size = " << size(vector1) << "\n";

    vector2.push_back(100);
    vector2.push_back(200);
    cout << "Vector2: {" << vector2.at(0) << "," << vector2.at(1) <<"}\n"
            "its size = " << size(vector2) << "\n";

    vector < vector<int> > vector_2d;

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    cout << "vector_2d: {" << vector_2d.at(0).at(0)<< "," << vector_2d.at(0).at(1) <<"}\n"
         << "vector_2d: {" << vector_2d.at(1).at(0)<< "," << vector_2d.at(1).at(1) <<"}\n"
         << "vector_2d = " << size(vector_2d) << "\n";

    vector_2d.at(0).at(0) = 1000;
    cout << "vector_2d[0]: {" << vector_2d.at(0).at(0)<< "," << vector_2d.at(0).at(1) <<"}\n"
         << "vector_2d[1]: {" << vector_2d.at(1).at(0)<< "," << vector_2d.at(1).at(1) <<"}\n";

    cout << "Vector1: {" << vector1.at(0) << "," << vector1.at(1) << "}\n";

    return 0;
}