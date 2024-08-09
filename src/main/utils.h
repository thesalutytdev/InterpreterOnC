#include "stdio.h"

bool isinarray(char arr[], char value) {
    for (int i = 0; i < sizeof(arr); i++) {
        if (arr[i] == value) {
            return true;
        }
    }
    return false;
}

bool isinarray(long int arr[], long int value) {
    for (int i = 0; i < sizeof(arr); i++) {
        if (arr[i] == value) {
            return true;
        }
    }
    return false;
}

bool isinarray(int arr[], int value) {
    for (int i = 0; i < sizeof(arr); i++) {
        if (arr[i] == value) {
            return true;
        }
    }
    return false;
}

bool isinarray(long arr[], long value) {
    for (int i = 0; i < sizeof(arr); i++) {
        if (arr[i] == value) {
            return true;
        }
    }
    return false;
}

bool isinarray(double arr[], double value) {
    for (int i = 0; i < sizeof(arr); i++) {
        if (arr[i] == value) {
            return true;
        }
    }
    return false;
}

bool isinarray(float arr[], float value) {
    for (int i = 0; i < sizeof(arr); i++) {
        if (arr[i] == value) {
            return true;
        }
    }
    return false;
}