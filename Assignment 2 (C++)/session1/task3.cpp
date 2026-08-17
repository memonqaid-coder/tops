#include <iostream>
#include <string>
using namespace std;
class Task{
private:
    string title;
    bool isDone;
public:
    Task(const string& taskTitle) : title(taskTitle), isDone(false){}
    void markDone(){
        isDone = true;
    }
    void display() const {
        cout << "[" << (isDone ? "✓" : " ") << "] " << title <<endl;
    }
};
int main(){
    Task task1("Submit OOP C++ Assignment");
    Task task2("Review Push Request");
    Task task3("Review Pull Request");
    cout<< "--- Initial Status ---"<<endl;
    task1.display();
    task2.display();
    task3.display();
    task1.markDone();
    task2.markDone();
    cout << "\n--- Updated Status ---" <<endl;
    task1.display();
    task2.display();
    task3.display();
    return 0;
}