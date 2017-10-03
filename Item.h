#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
using std::cout;
using std::endl;
using std::string;
using std::ostringstream;
using std::ostream;

class Item{

private:
    double latitude;
    double longitude;
    string id;
    int time;

public:
    Item(double latitude, double longitude, string id, int time)
        : latitude(latitude), longitude(longitude), id(id), time(time){

    }
        friend ostream& operator<<(ostream& os, const Item it)
        {
            os << "{" << it.latitude <<", " << it.longitude << ", " << "\""<< it.id << "\", " << it.time << "}" ;
            return os;
        }

double distanceTo (Item item){

        Item strand(51.5115, -0.116, "StrandCampus", 600);

        double radLatItem = item.latitude * (3.14159265359 /180);
        double radLongItem = item.longitude * (3.14159265359 /180);
        double radLatStrand = strand.latitude * (3.14159265359 /180);
        double radLongStrand = strand.longitude * (3.14159265359 /180);


        int r = 6373000;

        double dlon = radLongItem - radLongStrand;
        double dlat = radLatItem - radLatStrand;

        double a = pow((sin(dlat/2)), 2) + cos(radLatStrand) * cos(radLatItem) * pow((sin(dlon/2)), 2);

        double c = 2 * atan2( sqrt(a), sqrt(1-a));

        double distance = r * c;

        return  distance;





    }
};



// don't write any code below this line

#endif

