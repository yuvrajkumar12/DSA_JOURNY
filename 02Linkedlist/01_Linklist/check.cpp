#include <iostream>
using namespace std;
class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    void setTime(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }

    void addTime(int addedHours, int addedMinutes, int addedSeconds) {
        seconds += addedSeconds;
        minutes += addedMinutes;
        hours += addedHours;
        minutes += seconds / 60;
        seconds %= 60;
        hours += minutes / 60;
        minutes %= 60;
        hours %= 24;
    }
    int getHours() const {
        return hours;
    }

    int getMinutes() const {
        return minutes;
    }

    int getSeconds() const {
        return seconds;
    }

    void displayTime() const {
        cout << "Time: " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds\n";
    }
};
Time addTime(const Time& t, int addedHours, int addedMinutes, int addedSeconds) {
    Time result;
    result.setTime(t.getHours(), t.getMinutes(), t.getSeconds());
    result.addTime(addedHours, addedMinutes, addedSeconds);
    return result;
}

int main() {
    Time currentTime;
    currentTime.setTime(10, 30, 45);
    cout << "Initial ";
    currentTime.displayTime();
    Time updatedTime = addTime(currentTime, 2, 15, 30);
    cout << "Updated ";
    updatedTime.displayTime();
    return 0;
}
