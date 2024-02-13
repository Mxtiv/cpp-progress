#include <iostream>
using namespace std;
namespace inSeconds
{
    const int seconds = 1;
    const int minutes = 60;
    const int hours = 3600;
    const int days = inSeconds::hours * 24;
}
struct timex
{
    int seconds{};
    int minutes{};
    int hours{};
    int days{};
};
void secondsToTime(int seconds, timex &czas) // sekundy na czas
{
    czas.days = seconds / inSeconds::days;
    seconds = seconds % inSeconds::days;

    czas.hours = seconds / inSeconds::hours;
    seconds = seconds % inSeconds::hours;

    czas.minutes = seconds / inSeconds::minutes;
    seconds = seconds % inSeconds::minutes;

    czas.seconds = seconds;
}
int timeToSeconds(timex czas) // zwraca czas w sekundach
{
    int seconds;
    seconds += czas.days * inSeconds::days;
    seconds += czas.hours * inSeconds::hours;
    seconds += czas.minutes * inSeconds::minutes;
    seconds += czas.seconds;
    return seconds;
}
int main()
{

    timex time1, time2, sum;
    int se;

    return 0;

}