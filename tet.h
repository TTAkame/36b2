#ifndef _TET_H_
#define _TET_H_


#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <cstdlib>

// for Json::value
#include <json/json.h>
#include <json/reader.h>
#include <json/writer.h>
#include <json/value.h>

class Person{
	public:
		char name[20];
		Json::Value dump2json();
};

class Place{
    public:
        char name[50];
        Json::Value dump2json();


};

class Thing{
    public:
        char name[20];
        Json::Value dump2json();


};

#endif
