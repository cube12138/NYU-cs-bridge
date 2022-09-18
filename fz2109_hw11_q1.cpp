#include <iostream>
using namespace std;
void printTriangle(int n);
void printOpositeTriangles(int n);
void printRuler(int n);

int main() {
    int n;
    cout << "please enter a positive integer for print a triangle:" << endl;
    cin >> n;
    printTriangle(n);
    int m;
    cout << "please enter a positive integer for print a oposite triangle:" << endl;
    cin >> m;
    printOpositeTriangles(m);
    int k;
    cout << "please enter a positive integer for print a ruler:" << endl;
    cin >> k;
    printRuler(k);
    return 0;
}
void printTriangle(int n) {
    if (n == 1)
    {
        cout << "*" << endl;
    }
    if (n > 1)
    {
        printTriangle(n - 1);
        for (int i = 0; i < n; i++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void printOpositeTriangles(int n) {
    if (n == 1)
    {
        cout << "*" << endl;
        cout << "*" << endl;
    }
    if (n > 1)
    {
        for (int i = 0; i < n; i++)
        {
            cout << "*";
        }
        cout << endl;
        printOpositeTriangles(n - 1);
        for (int i = 0; i < n; i++)
        {
            cout << "*";
        }
        cout << endl;

    }
}
void printRuler(int n) {
    if (n == 1)
    {
        cout << "-" << endl;
    }
    if (n > 1)
    {
        printRuler(n - 1);
        for (int i = 0; i < n; i++)
        {
            cout << "-";
        }
        cout << endl;
        printRuler(n - 1);

    }
}