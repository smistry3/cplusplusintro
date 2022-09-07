//
//  HealthRecord.hpp
//  health_record_csv
//
//  Created by Samheeta Mistry on 12/3/20.
//

#ifndef HealthRecord_hpp
#define HealthRecord_hpp
#include <string>
class HealthRecord {
public:
    explicit HealthRecord(std::string personName) ;
    void setName(std::string personName);
    std::string getName() const ;
    void setWeight(float personWeight);
    float getWeight() const ;
    void setHeight(float personHeight);
    float getHeight() const ;
    float computeBMI() ;
    void outputCSV (std::ofstream& outputFile);
private:
    std::string pName;
    int pHeight, pWeight;
};



#endif /* HealthRecord_hpp */
