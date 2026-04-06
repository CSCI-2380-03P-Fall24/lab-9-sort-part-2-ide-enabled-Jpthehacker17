// test file - do not modify
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <ctime>
#include <iostream>
#include <string>
using namespace std;

#include "Sort.h" 


TEST_CASE("swapInt") {
    int arr[5] = {5, 2, 4, 1, 3};
    REQUIRE_NOTHROW(swapInt(arr, 1, 3));
    CHECK(arr[1] == 1);
    CHECK(arr[3] == 2);
}

TEST_CASE("bubblePass") {
    int arr[4] = {5, 2, 4, 1};
    REQUIRE_NOTHROW(bubblePass(arr, 4));

    CHECK(arr[0] == 2);
    CHECK(arr[1] == 4);
    CHECK(arr[2] == 1);
    CHECK(arr[3] == 5);
}

TEST_CASE("bubbleSort") {
    int arr[5] = {5, 2, 4, 1, 3};
    int sorted[5] = {1, 2, 3, 4, 5};

    REQUIRE_NOTHROW(bubbleSort(arr, 5));

    for (int i = 0; i < 5; i++) {
        CHECK(arr[i] == sorted[i]);
    }
}

TEST_CASE("insertionStep") {
    string arr[4] = {"dog", "apple", "cat", "banana"};

    REQUIRE_NOTHROW(insertionStep(arr, 1));
    CHECK(arr[0] == "apple");
    CHECK(arr[1] == "dog");
    CHECK(arr[2] == "cat");
    CHECK(arr[3] == "banana");

    REQUIRE_NOTHROW(insertionStep(arr, 2));
    CHECK(arr[0] == "apple");
    CHECK(arr[1] == "cat");
    CHECK(arr[2] == "dog");
    CHECK(arr[3] == "banana");
}

TEST_CASE("insertionSort") {
    string arr[5] = {"dog", "apple", "cat", "banana", "zebra"};
    string sorted[5] = {"apple", "banana", "cat", "dog", "zebra"};

    REQUIRE_NOTHROW(insertionSort(arr, 5));

    for (int i = 0; i < 5; i++) {
        CHECK(arr[i] == sorted[i]);
    }
}

TEST_CASE("swap") {
    double myDarray[5] = {5.0, 0.0, 4.0, 6.0, 3.0};
    REQUIRE_NOTHROW(swap(myDarray, 1, 3));
    CHECK(myDarray[1] == 6.0);
    CHECK(myDarray[3] == 0.0);
}

TEST_CASE("minFind") {
    double myDarray[5] = {5.0, -3.0, 4.0, 6.0, 3.0};
    REQUIRE_NOTHROW(minFind(myDarray, 5));
    CHECK(minFind(myDarray, 5) == 1);
}

TEST_CASE("newSort") {
    double myDarray[5] = {5.0, -3.0, 4.0, 6.0, 3.0};
    double sortArr[5] = {-3.0, 3.0, 4.0, 5.0, 6.0};

    REQUIRE_NOTHROW(newSort(myDarray, 5));

    for (int i = 0; i < 5; i++) {
        CHECK(myDarray[i] == sortArr[i]);
    }
}