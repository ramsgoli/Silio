//
//  Planner.cpp
//  Silio
//
//  Created by Lawrence Chen on 4/1/17.
//  Copyright © 2017 Lawrence Chen. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include "Planner.h"
using namespace std;

vector<Attraction> Planner::getPlan(GeoCoord& start, int maxCost, int maxDist, std::vector<NavSegment> directions){
    
    vector<Attraction> cat1 = loader.getCat(1);
    vector<Attraction> cat2 = loader.getCat(2);
    vector<Attraction> cat3 = loader.getCat(3);
    vector<Attraction> cat4 = loader.getCat(4);
    vector<Attraction> cat5 = loader.getCat(5);
    
    vector<int*> catCombo;
    
    int minOfRange[] = {0, 6, 11, 21, 31};
    
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++){
            for(int k = 1; k<= 5; k++){
                if(minOfRange[i-1] + minOfRange[j-1] + minOfRange[k-1] < maxCost){
                    int combo[3]  = {i, j, k};
                    catCombo.push_back(combo);
                }
            }
        }
    }
    
    
    
    vector<Attraction> currentPlan;
    return currentPlan;
    
}