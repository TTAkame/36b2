#include<iostream>
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <cstdlib>
#include <json/json.h>
#include <json/reader.h>
#include <json/writer.h>
#include <json/value.h>
#include "tet.h"

using namespace std;


Json::Value Person::dump2json(){
	Json::Value result{};
	result["Name"] = name;
    return result;
}

Json::Value Time::dump2json(){
	Json::Value result{};
	result["Time"] = name;
    return result;
}

Json::Value Location::dump2json(){
    Json::Value result{};
    result["Location"] = name;
    return result;
}


Json::Value Thing::dump2json(){
    Json::Value result{};
    result["Thing"] = name;
    return result;
}


Json::Value Record::dump2json(){
    Json::Value result{};

    result["Person 1"] = pa.dump2json();
    result["Person 2"] = pb.dump2json();

    result["Thing 1"] = ta.dump2json();
    result["Thing 2"] = tb.dump2json();

    result["Location"] = lon.dump2json();
    result["Time"] = tme.dump2json();

    return result;
}

void Record::setPerson(Person ps){
    pa = ps;
}

void Record::setPerson(Person p1, Person p2){
    pa = p1;
    pb = p2;
}

void Record::setThing(Thing tg){
    ta = tg;
}

void Record::setThing(Thing tg,Thing thg){
    ta = tg;
    tb = thg;
}

void Record::setLocation(Location ln){
    lon = ln;
}

void Record::setTime(Time te){
    tme = te;
}

