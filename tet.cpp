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


Json::Value
Person::dump2json(){
	Json::Value result{};
	result["name"] = name;
    return result;
}


Json::Value
Place::dump2json(){
    Json::Value result{};
    result["name"] = name;
    return result;
}


Json::Value
Thing::dump2json(){
    Json::Value result{};
    result["name"] = name;
    return result;
}


