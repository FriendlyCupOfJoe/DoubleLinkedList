#pragma once
#include <stdio.h>
#include<iostream>
#include<vector>
#include<string>

using namespace std;

class List
{
private:
	string value;
	List * pointToNext;
	List * pointToPrevious;
public:
	List() {};
	~List() {};
	void SetValue(string value) { this->value = value; };
	string RtrnValue() { return this->value; };
	void SetPointToNext(List * point) { this->pointToNext = point; };
	List * RtrnPointToNext() { return this->pointToNext; };
	void SetPointToPrevious(List * point) { this->pointToPrevious = point; };
	List * RtrnPointToPrevious() { return this->pointToPrevious; };
};
