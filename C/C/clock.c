#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

//12 hour format
int main(void) {
  while (1) {
    time_t current_time = time(NULL);
    struct tm *time_info = localtime(&current_time);
    char time_string[11];
    strftime(time_string, 11, "%I:%M:%S %p", time_info);
    printf("%s\n", time_string);
    sleep(1);
    system("clear");//use system("cls") for windows
  }
  return 0;
}

//24 hour format
/*
int main(void) {
  while (1) {
    time_t current_time = time(NULL);
    struct tm *time_info = localtime(&current_time);
    char time_string[9];
    strftime(time_string, 9, "%H:%M:%S", time_info);
    printf("%s\n", time_string);
    sleep(1);
    system("clear");//use system("cls") for windows
  }
  return 0;
}*/