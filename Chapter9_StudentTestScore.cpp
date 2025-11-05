#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct studentType {
    string studentFName;
    string studentLName;
    int testScore;
    char grade;
};

// Fungsi untuk menentukan grade berdasarkan testScore
char assignGrade(int score) {
    if (score >= 90) return 'A';
    else if (score >= 80) return 'B';
    else if (score >= 70) return 'C';
    else if (score >= 60) return 'D';
    else return 'F';
}

// Fungsi untuk input data siswa
void inputStudents(studentType students[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Masukkan nama depan siswa ke-" << i + 1 << ": ";
        cin >> students[i].studentFName;
        cout << "Masukkan nama belakang siswa ke-" << i + 1 << ": ";
        cin >> students[i].studentLName;
        cout << "Masukkan nilai ujian (0-100): ";
        cin >> students[i].testScore;

        students[i].grade = assignGrade(students[i].testScore);
        cout << endl;
    }
}

// Fungsi untuk mencari nilai tertinggi
int highestScore(studentType students[], int n) {
    int maxScore = students[0].testScore;
    for (int i = 1; i < n; i++) {
        if (students[i].testScore > maxScore)
            maxScore = students[i].testScore;
    }
    return maxScore;
}

// Fungsi untuk menampilkan semua data siswa
void displayStudents(studentType students[], int n) {
    cout << left << setw(15) << "Last Name" 
         << setw(15) << "First Name"
         << setw(12) << "Test Score"
         << setw(8)  << "Grade" << endl;
    cout << "--------------------------------------------" << endl;
    
    for (int i = 0; i < n; i++) {
        cout << left << setw(15) << students[i].studentLName
             << setw(15) << students[i].studentFName
             << setw(12) << students[i].testScore
             << setw(8)  << students[i].grade << endl;
    }
}

// Fungsi untuk menampilkan siswa dengan nilai tertinggi
void displayHighest(studentType students[], int n, int maxScore) {
    cout << "\nSiswa dengan nilai tertinggi (" << maxScore << "):\n";
    for (int i = 0; i < n; i++) {
        if (students[i].testScore == maxScore) {
            cout << students[i].studentLName << ", " << students[i].studentFName << endl;
        }
    }
}

int main() {
    const int numStudents = 5; // ganti 20 kalau mau full
    studentType students[numStudents];

    cout << "=== Input Data Nilai Siswa ===\n";
    inputStudents(students, numStudents);

    int maxScore = highestScore(students, numStudents);

    cout << "\n=== Daftar Nilai Siswa ===\n";
    displayStudents(students, numStudents);
    displayHighest(students, numStudents, maxScore);

    return 0;
}
