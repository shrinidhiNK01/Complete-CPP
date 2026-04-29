#include <bits/stdc++.h>
using namespace std;

class Movies {
private:
    int budget;
    string genre;
    string release_date;
    static string name;

public:
    void setData(int b, string g, string r) {
        budget = b;
        genre = g;
        release_date = r;
        budget++;
    }

    void display() {
        cout << name << endl;
        cout << budget << endl;
        cout << genre << endl;
        cout << release_date << endl;
    }
    static void getName(int b){
    cout << "Movie budget is " << b << endl;
}
};



// Static member definition
string Movies::name = "Shrinidhi";

int main() {
    Movies m;
    m.setData(100, "Action", "2026-04-28");
    m.display();
    Movies::getName(800);
}