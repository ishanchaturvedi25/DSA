#include <bits/stdc++.h>

using namespace std;

class Hero {

    private:
    int health;

    public:
    char level;

    Hero() {}

    Hero (int health, char level) {
        this->health = health;
        this->level = level;
    }

    Hero (Hero& temp) {
        this->health = temp.health;
        this->level = temp.level;
    }

    void setter(int n) {
        health = n;
    }

    void getter() {
        cout << health;
    }

    void print() {
        cout << this->health << endl;
        cout << this->level << endl;
    }
};

int main() {

    Hero h1(70,'A');

    Hero h2(h1);

    h1.print();
    h2.print();

    return 0;
}