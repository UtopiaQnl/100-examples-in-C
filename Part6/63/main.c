#include <stdio.h>
#include <stdlib.h>

typedef struct TIME {
    int seconds;
    int minutes;
    int hours;
} Time;

void differenceBetweenTimePeriod(Time t1, const Time t2, Time *diff);


int main(int argc, char *argv[])
{
    Time startTime, stopTime, diff;

    puts("Начальное время:");
    printf("Введите часы, минуты, секунды: ");
    scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);

    while (startTime.seconds >= 60) {
        startTime.minutes += 1;
        startTime.seconds -= 60;
    }

    while (startTime.minutes >= 60) {
        startTime.hours += 1;
        startTime.minutes -= 60;
    }

    puts("Конечное время:");
    printf("Введите часы, минуты, секунды: ");
    scanf("%d %d %d", &stopTime.hours, &stopTime.minutes, &stopTime.seconds);

    while (stopTime.seconds >= 60) {
        stopTime.minutes += 1;
        stopTime.seconds -= 60;
    }

    while (stopTime.minutes >= 60) {
        stopTime.hours += 1;
        stopTime.minutes -= 60;
    }

    differenceBetweenTimePeriod(startTime, stopTime, &diff);

    printf("\nРазница %02d:%02d:%02d - ", startTime.hours, startTime.minutes, startTime.seconds);
    printf("%02d:%02d:%02d = ", stopTime.hours, stopTime.minutes, stopTime.seconds);
    printf("%02d:%02d:%02d\n", diff.hours, diff.minutes, diff.seconds);

    return EXIT_SUCCESS;
}

void differenceBetweenTimePeriod(Time start, const Time stop, Time *diff)
{
    diff->seconds = start.seconds - stop.seconds;
    diff->minutes = start.minutes - stop.minutes;
    diff->hours = start.hours - stop.hours;
}
