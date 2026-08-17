#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Task {
private:
    string title;
    bool isDone;
public:
    Task(const string& taskTitle) : title(taskTitle), isDone(false) {}
    void markDone() {
        isDone = true;
    }
    void display() const {
        cout << "[" << (isDone ? "✓" : " ") << "] " << title << endl;
    }
};
class TaskList {
private:
    vector<Task> tasks;
public:
    void addTask(const string& title) {
        tasks.emplace_back(title);
    }
    void markTaskDone(size_t index) {
        if (index < tasks.size()) {
            tasks[index].markDone();
        } else {
            cout << "Invalid task index!" << endl;
        }
    }
    void showTasks() const {
        cout << "\n=== Current Task List ===" <<endl;
        if (tasks.empty()) {
            cout << "No tasks found." <<endl;
            return;
        }
        for (size_t i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". ";
            tasks[i].display();
        }
        cout << "=========================\n" <<endl;
    }
};
int main() {
    TaskList myTasks;
    myTasks.addTask("Design database schema");
    myTasks.addTask("Write API endpoints");
    myTasks.addTask("Build frontend UI");
    myTasks.showTasks();
    cout << "=> Marking task 2 ('Write API endpoints') as completed...\n";
    myTasks.markTaskDone(1);
    myTasks.showTasks();
    return 0;
}
