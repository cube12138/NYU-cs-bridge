//Fangtong Zhao(fz2109)
#include <iostream>
#include <vector>
using namespace std;

vector<int>read();
vector<int>rearr(vector<int>sequence);
void print(vector<int>sequence);

int main() {
    vector<int>sequence;
    sequence = read();
    vector<int>resequence;
    resequence = rearr(sequence);
    print(resequence);
    return 0;
}

vector<int>read() {
    cout << "Please enter a non-empty sequence of lines. Each line should have a student ID and their grade (0-100), separated by a space. To indicate the end of the input, enter -1 as a student ID: " << endl;
    int ID;
    int grade;
    cin >> ID;
    vector<int>sequence;
    while (ID >= 0) {
        sequence.push_back(ID);
        cin >> grade;
        sequence.push_back(grade);
        cin >> ID;
    }
    return sequence;
}

vector<int>rearr(vector<int>sequence) {
    int size = sequence.size();
    vector<int>rearraged;
    for (int x = 1; x <= 100; x++)
    {
        for (int y = 1; y < size; y += 2)
        {
            if (sequence[y] == x)
            {
                rearraged.push_back(sequence[y - 1]);
                rearraged.push_back(sequence[y]);
            }
        }
    }
    return rearraged;
}

void print(vector<int>sequence) {
    vector<int>times_appear;
    int num = sequence[1], times = 0;
    for (int x = 1; x < sequence.size(); x += 2)
    {
        if (num == sequence[x])
        {
            times += 1;
        }
        else
        {
            times_appear.push_back(num);
            times_appear.push_back(x - 2 * times);
            times_appear.push_back(times);
            times = 1;
            num = sequence[x];
        }
    }
    int temp_max = 0, start_number = 0, max = 0;
    for (int x = 2; x < times_appear.size(); x += 3)
    {
        if (times_appear[x] > temp_max)
        {
            temp_max = times_appear[x];
            start_number = times_appear[x - 1];
            max = times_appear[x - 2];
        }
    }
    cout << "The highest grade grade is " << max << endl;
    cout << "The students with grade " << max << " are: ";
    for (int x = start_number; x < start_number + 2 * temp_max; x += 2) {
        cout << sequence[x - 1] << " ";
    }
}

/*
//yuhao:
#include <iostream>
#include<vector>
using namespace std;

vector<int>get_info();
void find_maximum(vector<int>vect);

int main() {
    vector<int>student_id_and_grade;
    student_id_and_grade = get_info();
    find_maximum(student_id_and_grade);
    return 0;
}

vector<int>get_info() {
    vector<int>id_and_grade;
    int id, grade;
    cout << "Please enter a non-empty sequence of lines" << endl;
    cout << "Each line should have a student ID and their grade (0-100), separated by a space." << endl;
    cout << "To indicate the end of the input, enter -1 as a student ID: " << endl;
    cin >> id;
    while (id >= 0) {
        id_and_grade.push_back(id);
        cin >> grade;
        id_and_grade.push_back(grade);
        cin >> id;
    }
    return id_and_grade;
}

void find_maximum(vector<int>vect) {
    int max = vect[1];
    for (int x = 1; x < vect.size(); x += 2) {
        if (vect[x] > max) {
            max = vect[x];
        }
    }
    cout << "The highest grade is " << max << "." << endl;
    cout << "The students with grade " << max << " are: ";
    for (int x = 1; x < vect.size(); x += 2) {
        if (vect[x] == max) {
            cout << vect[x - 1] << " ";
        }
    }
}
*/