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

class Location{
    public:
        char name[50];
        Json::Value dump2json();


};

class Thing{
    public:
        char name[20];
        Json::Value dump2json();


};

class Time{
    public:
        char name[20];
        Json::Value dump2json();


};

class Record {
    public:
        /* char pname[20] = "record pn"; */
        Person pa;
        Person pb;
        Thing ta;
        Thing tb;
        Location lon;
        Time tme;
        /* Json::Value dump2json(); */
        Json::Value dump2json();
        void setPerson(Person ps);
        void setPerson(Person p1, Person p2);
        void setThing(Thing tg);
        void setThing(Thing tg,Thing thg);
        void setLocation(Location ln);
        void setTime(Time te);
};

#endif
