//
//  Planner.h
//  Silio
//
//  Created by Lawrence Chen on 4/1/17.
//  Copyright © 2017 Lawrence Chen. All rights reserved.
//

#ifndef Planner_h
#define Planner_h

#include "provided.h"
#include <vector>

class Planner{
    public:
        Planner(){}
        ~Planner(){}
        
        std::vector<Attraction> getPlan(GeoCoord& start, 
            int maxCost, 
            int maxDist, 
            std::vector<NavSegment> directions);

        
        bool loadMapData(std::string mapFile)
        {
            //call member instance of MapLoader to load map data from mapFile text file
            if (loader.load(mapFile)) {
                return true;
            } else
                return false;
        vector<GeoCoord> findRoute(GeoCoord start, GeoCoord visiting[]); 
   }  
        
        
private:
        MapLoader loader;
};

#endif /* Planner_h */
