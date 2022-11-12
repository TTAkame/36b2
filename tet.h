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

class Parameter {
	public:
		char name[20];
		virtual Json::Value dump2json();
};

class Person : public Parameter {
	public:
};

class Location : public Parameter {
    public:
};

class Thing : public Parameter {
    public:
};

class Time : public Parameter {
    public:
};

class Record {
    public:
        /* char pname[20] = "record pn"; */
        Person pa{""};
        Person pb{""};
        Thing ta{""};
        Thing tb{""};
        Location lon{""};
        Time tme{""};
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
